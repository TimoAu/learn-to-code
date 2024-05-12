#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS
class animal{
    public:
    int number_feet;
    float speed;
    int get_number_feet();
    virtual float move(float& time)=0;
    static void die();
};
class spider : public animal{
    public:
    float position;
    spider(float& speed_init);
    ~spider();
    float move(float& time)override{
    position = position+(speed*time);
    return position;
    }  
};
class mamal : public animal
{
    public:
    float position;
    mamal(int number_feet_init, float& speed_init);
    ~mamal();
    float move(float& time)override{
        position = position+(speed*time);
        return position;
    }
};
#endif