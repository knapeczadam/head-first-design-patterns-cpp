#pragma once

#include "Beverage.h"

#include <memory>
#include <string>

namespace decorator
{
    class CondimentDecorator : public Beverage
    {
    protected:
        std::shared_ptr<Beverage> beverage = nullptr;

    public:
        std::string getDescription() const override = 0;

        EBeverageSize getSize() const override;

        virtual ~CondimentDecorator() = 0;
    };
}
