#pragma once

#include "Beverage.h"
#include "CondimentDecorator.h"

#include <memory>

namespace decorator
{
    class Mocha : public CondimentDecorator
    {
    public:
        explicit Mocha(const std::shared_ptr<Beverage>& newBeverage);

        double cost() override;

        std::string getDescription() const override;
    };
}
