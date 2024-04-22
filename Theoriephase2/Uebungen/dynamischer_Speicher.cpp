#include<iostream>
#include<memory>
int main(){
    unsigned int size_array;
    std::cout<<"Länge des Arrays eingeben"<<std::endl;
    std::cin>>size_array; 

    std::cout<<"----------------------------------"<<std::endl;
    std::cout<<"Inhalt des Arrays:"<<std::endl;
    auto ptr1 = std::make_unique<int[]>(size_array);

    for(int i = 1; i<(size_array+1);i++){
        ptr1[i-1] = i;
    
    }
    for(int m = 0; m<size_array;m++){
        std::cout<<ptr1[m]<<std::endl;
    }
    return 0;
}