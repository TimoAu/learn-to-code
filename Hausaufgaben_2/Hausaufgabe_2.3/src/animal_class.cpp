#include "animal_class.h"
#include "iostream"

int animal::get_number_feet(){
    return number_feet;
}
void animal::die(){
    std::cout<<"animal died"<<std::endl;
}

spider::spider(float& speed_init){
    number_feet = 8;
    speed = speed_init;
    position = 0;
}
spider::~spider(){
    die();
}


mamal::mamal(int number_feet_init, float& speed_init){
    number_feet=number_feet_init;
    speed=speed_init;
    position = 0;
}
mamal::~mamal(){
    die();
}

