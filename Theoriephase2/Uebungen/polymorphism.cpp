#include <iostream>
#include<cstdint>
#include <string>
#include <vector>
#include <memory>

class animal{
    public:
    int feet;
    std::string name;
    virtual void make_noise() = 0;
};

class cat;

class bird :public animal 
{
    public:
    /*bird(const std::string &name_init){
        name = name_init;
    }*/

    void operator+(const bird &bird_1);
    void operator+(const cat &cat_1);
    void make_noise()override{
        std::cout<< "Gur gur"<<std::endl;
    }
};

class cat :public animal 
{
    public:
    /*cat(const std::string &nameinit)
    {
        name = nameinit;
    }*/
    
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
        void make_noise()override{
        std::cout<< "Miau"<<std::endl;
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
    //cat cat1("Cat");
    //bird bird1("Bird");
    //std::shared_ptr<animal>ptr_animal;
    /*cat cat1, cat2, cat3, cat4;
    bird bird1, bird2, bird3, bird4, bird5, bird6;*/
    /*std::shared_ptr<bird> bird_ptr;
    std::shared_ptr<cat> cat_ptr;*/
    std::vector<std::shared_ptr<animal>>v;
    for(int k = 0;k++;k<5){
        v.push_back(std::shared_ptr<animal>(new bird));
        v.push_back(std::shared_ptr<animal>(new cat));
    }
    for(auto &i:v)
    {
        i->make_noise();
    }



    
    return 0;
}