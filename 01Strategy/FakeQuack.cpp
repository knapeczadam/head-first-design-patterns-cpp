#include "FakeQuack.h"

#include <iostream>

namespace strategy
{
    void FakeQuack::quack()
    {
        std::cout << "Qwak" << '\n';
    }
}
