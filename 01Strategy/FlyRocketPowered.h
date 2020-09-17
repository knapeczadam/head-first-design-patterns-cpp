#pragma once

#include "IFlyBehavior.h"

namespace strategy
{
    class FlyRocketPowered : public IFlyBehavior
    {
    public:
        void fly() override;
    };
}
