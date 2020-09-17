#pragma once

#include "Duck.h"

namespace strategy
{
    class FakeQuack : public IQuackBehavior
    {
    public:
        void quack() override;
    };
}
