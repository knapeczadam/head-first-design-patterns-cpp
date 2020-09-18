#pragma once

#include "IVeggies.h"

namespace factory::pizzaaf
{
    class Spinach : public IVeggies
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
