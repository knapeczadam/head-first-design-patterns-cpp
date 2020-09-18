#pragma once

#include "IDough.h"

namespace factory::pizzaaf
{
    class ThickCrustDough : public IDough
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
