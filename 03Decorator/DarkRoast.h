#pragma once

#include "Beverage.h"

namespace decorator
{
    class DarkRoast : public Beverage
    {
    public:
        DarkRoast();

        double cost() override;
    };
}
