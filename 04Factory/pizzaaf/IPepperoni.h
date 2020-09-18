#pragma once

#include <ostream>

namespace factory::pizzaaf
{
    class IPepperoni
    {
    public:
        virtual ~IPepperoni() = default;

        virtual void toString(std::ostream& os) const = 0;

        friend std::ostream& operator<<(std::ostream& os, const IPepperoni& pepperoni);
    };
}
