#include "MallardDuck.h"

#include <iostream>

namespace adapter::ducks
{

    void MallardDuck::quack()
    {
        std::cout << "Quack" << '\n';
    }

    void MallardDuck::fly()
    {
        std::cout << "I'm flying" << '\n';
    }
}
