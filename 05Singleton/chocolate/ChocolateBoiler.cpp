#include "ChocolateBoiler.h"

#include <iostream>

namespace singleton::chocolate
{
    ChocolateBoiler& ChocolateBoiler::getInstance()
    {
        static ChocolateBoiler uniqueInstance;
        std::cout << "Returning instance of Chocolate Boiler" << '\n';
        return uniqueInstance;
    }

    void ChocolateBoiler::fill()
    {
        if (isEmpty())
        {
            empty = false;
            boiled = false;
        }
    }

    void ChocolateBoiler::drain()
    {
        if (!isEmpty() && isBoiled())
        {
            empty = true;
        }
    }

    void ChocolateBoiler::boil()
    {
        if (!isEmpty() && !isBoiled())
        {
            boiled = true;
        }
    }

    bool ChocolateBoiler::isEmpty() const
    {
        return empty;
    }

    bool ChocolateBoiler::isBoiled() const
    {
        return boiled;
    }
}
