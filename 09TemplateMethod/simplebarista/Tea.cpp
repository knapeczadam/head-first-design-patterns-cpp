#include "Tea.h"

#include <iostream>

namespace templatemethod::simplebarista
{
    void Tea::boilWater()
    {
        std::cout << "Boiling water" << '\n';
    }

    void Tea::steepTeaBag()
    {
        std::cout << "Steeping the tea" << '\n';
    }

    void Tea::addLemon()
    {
        std::cout << "Adding Lemon" << '\n';
    }

    void Tea::pourInCup()
    {
        std::cout << "Pouring into cup" << '\n';
    }

    void Tea::prepareRecipe()
    {
        boilWater();
        steepTeaBag();
        pourInCup();
        addLemon();
    }
}
