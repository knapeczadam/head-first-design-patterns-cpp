#include "Tea.h"

#include <iostream>

namespace templatemethod::barista
{
    void Tea::brew()
    {
        std::cout << "Steeping the tea" << '\n';
    }

    void Tea::addCondiments()
    {
        std::cout << "Adding Lemon" << '\n';
    }
}
