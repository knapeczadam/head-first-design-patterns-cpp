#include "Coffee.h"

#include <iostream>

namespace templatemethod::simplebarista
{
    void Coffee::boilWater()
    {
        std::cout << "Boiling water" << '\n';
    }

    void Coffee::brewCoffeeGrinds()
    {
        std::cout << "Dripping Coffee through filter" << '\n';
    }

    void Coffee::pourInCup()
    {
        std::cout << "Pouring into cup" << '\n';
    }

    void Coffee::addSugarAndMilk()
    {
        std::cout << "Adding Sugar and Milk" << '\n';
    }

    void Coffee::prepareRecipe()
    {
        boilWater();
        brewCoffeeGrinds();
        pourInCup();
        addSugarAndMilk();
    }
}
