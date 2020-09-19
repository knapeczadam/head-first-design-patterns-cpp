#include "Cook.h"

#include <iostream>

namespace command::diner
{
    void Cook::makeBurger()
    {
        std::cout << "Making a burger" << '\n';
    }

    void Cook::makeFries()
    {
        std::cout << "Making fries" << '\n';
    }
}
