#pragma once

#include <ostream>

namespace factory::pizzaaf
{
    class ICheese
    {
    public:
        virtual ~ICheese() = 0;

        virtual void toString(std::ostream& os) const = 0;

        friend std::ostream& operator<<(std::ostream& os, const ICheese& cheese);
    };
}
