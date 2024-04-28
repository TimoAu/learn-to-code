#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS
class animal{
    public:
    int number_feet;
    int get_number_feet();
};
class spider : public animal{
    void spider();
};
class mamal : public animal{
    void mamal();
};
#endif