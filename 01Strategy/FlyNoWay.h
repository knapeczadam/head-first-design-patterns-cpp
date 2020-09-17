#pragma once

#include "IFlyBehavior.h"

namespace strategy
{
    class FlyNoWay : public IFlyBehavior
    {
    public:
        void fly() override;
    };
}
