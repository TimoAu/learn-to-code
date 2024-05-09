#include "animal_class.h"

int animal::get_number_feet(){
    return number_feet;
}
float mamal::position(float time)override{
    float position = time*speed;
    std::cout<<"NOISE"<<std::endl;
    return position;
}
spider:: spider(float init_speed){
    speed = init_speed;
    number_feet = 8;
}
mamal:: mamal(int init_number_feet, float init_speed){
    speed = init_speed;
    number_feet = init_number_feet;
}