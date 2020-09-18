#pragma once

#include <ostream>

namespace factory::pizzaaf
{
    class IDough
    {
    public:
        virtual ~IDough() = default;

        virtual void toString(std::ostream& os) const = 0;

        friend std::ostream& operator<<(std::ostream& os, const IDough& dough);
    };
}
