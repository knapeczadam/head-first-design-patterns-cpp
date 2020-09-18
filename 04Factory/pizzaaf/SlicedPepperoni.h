#pragma once

#include "IPepperoni.h"

namespace factory::pizzaaf
{
    class SlicedPepperoni : public IPepperoni
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
