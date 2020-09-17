#pragma once

#include "IFlyBehavior.h"

namespace strategy
{
    class FlyWithWings : public IFlyBehavior
    {
    public:
        void fly() override;
    };
}
