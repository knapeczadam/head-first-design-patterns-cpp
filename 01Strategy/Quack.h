#pragma once

#include "IQuackBehavior.h"

namespace strategy
{
    class Quack : public IQuackBehavior
    {
    public:
        void quack() override;
    };
}
