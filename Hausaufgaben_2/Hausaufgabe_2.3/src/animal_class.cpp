#include "animal_class.h"

int animal::get_number_feet(){
    return number_feet;
}
spider:: spider(){
    number_feet = 8;
}
mamal:: mamal(int init_number_feet){
    number_feet = init_number_feet;
}