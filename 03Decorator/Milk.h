#pragma once

#include "Beverage.h"
#include "CondimentDecorator.h"

#include <memory>

namespace decorator
{
    class Milk : public CondimentDecorator
    {
    public:
        explicit Milk(const std::shared_ptr<Beverage>& newBeverage);

        ~Milk() override = default;

        double cost() override;

        std::string getDescription() const override;
    };
}
