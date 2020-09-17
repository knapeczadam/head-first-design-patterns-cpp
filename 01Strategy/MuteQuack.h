#pragma once

#include "IQuackBehavior.h"

namespace strategy
{
    class MuteQuack : public IQuackBehavior
    {
    public:
        void quack() override;
    };
}
