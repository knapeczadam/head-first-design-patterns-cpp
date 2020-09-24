#pragma once

#include "b.h"

namespace antipattern::circulardependency
{
    class A
    {
    public:
        B* b;
    };
}
