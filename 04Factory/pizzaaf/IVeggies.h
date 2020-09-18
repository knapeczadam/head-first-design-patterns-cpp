#pragma once

#include <string>
#include <ostream>

namespace factory::pizzaaf
{
    class IVeggies
    {
    public:
        virtual ~IVeggies() = 0;

        virtual void toString(std::ostream& os) const = 0;

        friend std::ostream& operator<<(std::ostream& os, const IVeggies& veggies);
    };
}
