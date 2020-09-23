#include "RubberDuck.h"

#include <iostream>

namespace combining::adapter
{
    void RubberDuck::quack()
    {
        std::cout << "Squeak" << '\n';
    }
}
