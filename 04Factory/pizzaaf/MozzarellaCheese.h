#pragma once

#include "ICheese.h"

namespace factory::pizzaaf
{
    class MozzarellaCheese : public ICheese
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
