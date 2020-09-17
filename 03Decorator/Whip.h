#pragma once

#include "Beverage.h"
#include "CondimentDecorator.h"

#include <memory>

namespace decorator
{
    class Whip : public CondimentDecorator
    {
    public:
        explicit Whip(const std::shared_ptr<Beverage>& newBeverage);

        double cost() override;

        std::string getDescription() const override;
    };
}
