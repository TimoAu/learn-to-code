#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS
class animal{
    public:
    int number_feet;
    float speed;
    int get_number_feet();
    virtual float position(float time)=0;
};
class spider : public animal{
    public:
    spider();
};
class mamal : public animal
{
    public:
    mamal(int init_number_feet);
};
#endif