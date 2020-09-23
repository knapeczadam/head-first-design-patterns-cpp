#include "DecoyDuck.h"

#include <iostream>

namespace combining::adapter
{
    void DecoyDuck::quack()
    {
        std::cout << "<< Silence >>" << '\n';
    }
}
