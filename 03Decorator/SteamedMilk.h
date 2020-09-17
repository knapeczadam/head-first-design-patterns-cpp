#pragma once

#include "CondimentDecorator.h"
#include "Beverage.h"

#include <memory>

namespace decorator
{
    class SteamedMilk : public CondimentDecorator
    {
    public:
        explicit SteamedMilk(const std::shared_ptr<Beverage>& newBeverage);

        double cost() override;

        std::string getDescription() const override;
    };
}
