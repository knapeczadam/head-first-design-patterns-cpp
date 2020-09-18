#pragma once

#include "IDough.h"

namespace factory::pizzaaf
{
    class ThinCrustDough : public IDough
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
