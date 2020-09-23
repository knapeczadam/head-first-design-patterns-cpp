#include "DecoyDuck.h"

#include <iostream>

namespace combining::decorator
{
    void DecoyDuck::quack()
    {
        std::cout << "<< Silence >>" << '\n';
    }
}
