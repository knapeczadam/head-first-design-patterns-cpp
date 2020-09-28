#pragma once

#include "ITree.h"

namespace flyweight
{
    class ConiferTree : public ITree
    {
    public:
        void display(int x, int y) override;
    };
}
