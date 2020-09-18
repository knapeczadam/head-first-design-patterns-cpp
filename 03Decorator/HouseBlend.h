#pragma once

#include "Beverage.h"

namespace decorator
{
    class HouseBlend : public Beverage
    {
    public:
        HouseBlend();

        ~HouseBlend() override = default;

        double cost() override;
    };
}
