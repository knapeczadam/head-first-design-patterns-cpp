#pragma once

#include "IVeggies.h"

namespace factory::pizzaaf
{
    class Mushroom : public IVeggies
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
