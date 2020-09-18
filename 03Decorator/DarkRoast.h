#pragma once

#include "Beverage.h"

namespace decorator
{
    class DarkRoast : public Beverage
    {
    public:
        DarkRoast();

        ~DarkRoast() override = default;

        double cost() override;
    };
}
