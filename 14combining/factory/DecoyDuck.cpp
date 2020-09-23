#include "DecoyDuck.h"

#include <iostream>

namespace combining::factory
{
    void DecoyDuck::quack()
    {
        std::cout << "<< Silence >>" << '\n';
    }
}
