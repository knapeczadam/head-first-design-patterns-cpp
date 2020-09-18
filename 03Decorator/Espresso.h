#pragma once

#include "Beverage.h"

namespace decorator
{
    class Espresso : public Beverage
    {
    public:
        Espresso();

        ~Espresso() override = default;

        double cost() override;
    };
}
