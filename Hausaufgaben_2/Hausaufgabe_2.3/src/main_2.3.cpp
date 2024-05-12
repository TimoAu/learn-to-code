#include "animal_class.h"
#include "iostream"
int main()
{
    float speed_spider;
    float speed_mamal;
    std::cout << "Geschwindigkeit der Spinne eingeben:";
    std::cin >> speed_spider;
    std::cout << std::endl;
    spider tarantula(speed_spider);
    std::cout << "Geschwindigkeit des Murmeltiers eingeben:";
    std::cin >> speed_mamal;
    std::cout << std::endl;
    mamal groundhog((int)4, speed_mamal);
    std::cout << "Wie lange sollen die Tiere laufen?";
    float time;
    std::cin >> time;
    std::cout << std::endl;
    int steps;
    std::cout << "Wie oft sollen die Tiere laufen?";
    std::cin >> steps;
    std::cout << std::endl;
    for (int i = 0; i<steps; i++)
    {
        tarantula.move(time);
        groundhog.move(time);
    }
    std::cout << "Das Murmeltier ist " << groundhog.position << " m weit gelaufen" << std::endl;
    std::cout << "Die Spinne ist " << tarantula.position << " m weit gelaufen" << std::endl;
    return 0;
}