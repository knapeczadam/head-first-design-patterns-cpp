#include "CaffeineBeverageWithHook.h"

#include <iostream>

namespace templatemethod::barista
{
    void CaffeineBeverageWithHook::prepareRecipe()
    {
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCondiments())
        {
            addCondiments();
        }
    }

    void CaffeineBeverageWithHook::boilWater()
    {
        std::cout << "Boiling water" << '\n';
    }

    void CaffeineBeverageWithHook::pourInCup()
    {
        std::cout << "Pouring into cup" << '\n';
    }

    bool CaffeineBeverageWithHook::customerWantsCondiments()
    {
        return true;
    }

    CaffeineBeverageWithHook::~CaffeineBeverageWithHook()
    {

    }
}
