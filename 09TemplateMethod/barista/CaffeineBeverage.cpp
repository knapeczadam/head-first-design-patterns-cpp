#include "CaffeineBeverage.h"

#include <iostream>

namespace templatemethod::barista
{
    void CaffeineBeverage::prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    void CaffeineBeverage::boilWater()
    {
        std::cout << "Boiling water" << '\n';
    }

    void CaffeineBeverage::pourInCup()
    {
        std::cout << "Pouring into cup" << '\n';
    }

    CaffeineBeverage::~CaffeineBeverage()
    {

    }
}
