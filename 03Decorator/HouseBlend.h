#pragma once

#include "Beverage.h"

namespace decorator
{
    class HouseBlend : public Beverage
    {
    public:
        HouseBlend();

        double cost() override;
    };
}
