#pragma once

#include "IClams.h"

namespace factory::pizzaaf
{
    class FreshClams : public IClams
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
