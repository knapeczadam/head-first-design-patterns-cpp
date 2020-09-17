#pragma once

#include "Beverage.h"

namespace decorator
{
    class Espresso : public Beverage
    {
    public:
        Espresso();

        double cost() override;
    };
}
