#include "animal_class.h"
#include "iostream"
int main()
{
    float position_spider = 0;
    float position_mamal = 0;
    float speed_spider;
    float speed_mamal;
    std::cout << "Geschwindigkeit der Spinne eingeben:";
    std::cin >> speed_spider;
    std::cout << std::endl;
    spider tarantula(&speed_spider);
    std::cout << "Geschwindigkeit des Murmeltiers eingeben:";
    std::cin >> speed_mamal;
    std::cout << std::endl;
    std::cin >> speed_mamal;
    mamal groundhog(4, &speed_mamal);
    std::cout << "Wie lange sollen die Tiere laufen?";
    float time;
    std::cin >> time;
    std::cout << std::endl;
    int steps;
    std::cout << "Wie oft sollen die Tiere laufen?";
    std::cin >> steps;
    std::cout << std::endl;
    for (int i = 0; i++; i < (steps + 1))
    {
        tarantula.position(&time, &position_spider);
        groundhog.position(&time, &position_mamal);
    }
    std::cout << "Das Murmeltier ist" << position_mamal << " m weit gelaufen" << std::endl;
    std::cout << "Die Spinne ist" << position_spider << " m weit gelaufen" << std::endl;
    return 0;
}