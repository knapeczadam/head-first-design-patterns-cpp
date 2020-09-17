#pragma once

#include "IQuackBehavior.h"

namespace strategy
{
    class Squeak : public IQuackBehavior
    {
    public:
        void quack() override;
    };
}
