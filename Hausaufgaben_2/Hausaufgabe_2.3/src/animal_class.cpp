#include "animal_class.h"

int animal::get_number_feet(){
    return number_feet;
}
void animal::die(){
    std::cout<<"animal died"<<std::endl;
}
float mamal::position(float time, float position)override{
    position = time*speed+position;
    std::cout<<"noise"<<std::endl;
    return position;
}
spider:: spider(float init_speed){
    speed = init_speed;
    number_feet = 8;
}
spider::~spider(){
    die();
}
mamal:: mamal(int init_number_feet, float init_speed){
    speed = init_speed;
    number_feet = init_number_feet;
}
mamal::~mamal(){
    die();
}
float spider::position(float time, float position)override{
    position = time*speed+position;
    std::cout<<"noise"<<std::endl;
    return position;
}