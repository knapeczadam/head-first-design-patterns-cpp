#pragma once

#include "Beverage.h"
#include "CondimentDecorator.h"

#include <memory>

namespace decorator
{
    class Soy : public CondimentDecorator
    {
    public:
        explicit Soy(const std::shared_ptr<Beverage>& newBeverage);

        double cost() override;

        std::string getDescription() const override;
    };
}
