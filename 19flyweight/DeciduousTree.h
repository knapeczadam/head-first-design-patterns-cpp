#pragma once

#include "ITree.h"

namespace flyweight
{
    class DeciduousTree : public ITree
    {
    public:
        void display(int x, int y) override;
    };
}
