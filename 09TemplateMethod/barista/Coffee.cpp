#include "Coffee.h"

#include <iostream>

namespace templatemethod::barista
{
    void Coffee::brew()
    {
        std::cout << "Dripping Coffee through filter" << '\n';
    }

    void Coffee::addCondiments()
    {
        std::cout << "Adding Sugar and Milk" << '\n';
    }
}
