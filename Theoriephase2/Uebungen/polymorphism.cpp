#include <iostream>
#include<cstdint>
#include <string>

class animal{
    public:
    int feet;
    std::string name;
};

class cat;

class bird :public animal 
{
    public:
    bird(const std::string &name_init){
        name = name_init;
    }

    void operator+(const bird &bird_1);
    void operator+(const cat &cat_1);
};

class cat :public animal 
{
    public:
    cat(const std::string &nameinit)
    {
        name = nameinit;
    }
    
    void operator+(const bird &bird_1){
        std::string addition = name + bird_1.name;
        std::cout<<"Cat+Bird ergibt: ";
        std::cout<<addition<<std::endl;
    }
    void operator+(const cat &cat_1){
        std::string addition = name + cat_1.name;
        std::cout<<"Bird+Bird ergibt: ";
        std::cout<<addition<<std::endl;
    }
};

void bird::operator+(const bird &bird_1){
        std::string addition = name + bird_1.name;
        std::cout<<"Bird+Bird ergibt: ";
        std::cout<<addition<<std::endl;
    }
void bird::operator+(const cat &cat_1){
        std::string addition = name + cat_1.name;
        std::cout<<"Bird+Cat ergibt: ";
        std::cout<<addition<<std::endl;}

int main(){
    cat cat1("Cat");
    bird bird1("Bird");
    cat1+bird1;
    cat1+cat1;
    bird1+cat1;
    bird1+bird1;
    return 0;
}