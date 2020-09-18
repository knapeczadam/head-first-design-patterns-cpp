#pragma once

#include "IClams.h"

namespace factory::pizzaaf
{
    class FrozenClams : public IClams
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
