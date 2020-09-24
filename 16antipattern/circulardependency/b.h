#pragma once

#include "a.h"

namespace antipattern::circulardependency
{
    class B
    {
    public:
        A* a;
    };
}
