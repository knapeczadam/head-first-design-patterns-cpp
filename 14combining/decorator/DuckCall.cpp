#include "DuckCall.h"

#include <iostream>

namespace combining::decorator
{
    void DuckCall::quack()
    {
        std::cout << "Kwak" << '\n';
    }
}
