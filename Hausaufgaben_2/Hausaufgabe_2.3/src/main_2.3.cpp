#include "animal_class.h"
#include "iostream"
int main(){
    spider tarantula;
    mamal groundhog(4);
    std::cout<<"Tarantula hat"<<"   "<< tarantula.get_number_feet()<<" Beine"<<std::endl;
    std::cout<<"Groundhog hat"<<"   "<<groundhog.get_number_feet()<<" Beine"<<std::endl;
    return 0;
}