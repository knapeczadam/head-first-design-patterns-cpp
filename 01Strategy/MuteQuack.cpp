#include "MuteQuack.h"

#include <iostream>

namespace strategy
{
    void MuteQuack::quack()
    {
        std::cout << "<< Silence >>" << '\n';
    }
}
