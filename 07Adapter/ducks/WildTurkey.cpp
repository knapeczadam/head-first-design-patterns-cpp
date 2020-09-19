#include "WildTurkey.h"

#include <iostream>

namespace adapter::ducks
{
    void WildTurkey::gobble()
    {
        std::cout << "Gobble gobble" << '\n';
    }

    void WildTurkey::fly()
    {
        std::cout << "I'm flying a short distance" << '\n';
    }
}
