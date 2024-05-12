#include "animal_class.h"
#include "iostream"

class animal{
    public:
    int number_feet;
    float speed;
    int get_number_feet(){
        return number_feet;
    }
    virtual float move(float &time,float &speed)=0;
    static void die(){
        std::cout<<"animal died"<<std::endl;
    }
};
class spider : public animal{
    public:
    spider(float &speed_init){
        number_feet = 8;
        speed = speed_init;
    }
    ~spider(){
        die();
    }
    float move(float &time, float &position)override{
        position = position+(speed*time);
        return position;
    }
};
class mamal : public animal
{
    public:
    mamal(int init_number_feet, float &speed_init){
        number_feet = init_number_feet;
        speed = speed_init;
    }
    ~mamal(){
        die();
    }
    float move(float &time, float &position)override{
        position = position+(speed*time);
        return position;
    }
};