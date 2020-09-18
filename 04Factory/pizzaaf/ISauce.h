#pragma once

#include <ostream>

namespace factory::pizzaaf
{
    class ISauce
    {
    public:
        virtual ~ISauce() = 0;

        virtual void toString(std::ostream& os) const = 0;

        friend std::ostream& operator<<(std::ostream& os, const ISauce& sauce);
    };
}
