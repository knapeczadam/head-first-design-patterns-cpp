#pragma once

#include "ISauce.h"

namespace factory::pizzaaf
{
    class MarinaraSauce : public ISauce
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
