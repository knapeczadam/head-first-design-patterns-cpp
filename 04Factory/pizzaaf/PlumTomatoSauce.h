#pragma once

#include "ISauce.h"

namespace factory::pizzaaf
{
    class PlumTomatoSauce : public ISauce
    {
    public:
        void toString(std::ostream& os) const override;
    };
}
