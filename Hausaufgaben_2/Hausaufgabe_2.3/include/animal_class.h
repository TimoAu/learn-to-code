#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS
class animal{
    public:
    int number_feet;
    int get_number_feet();
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