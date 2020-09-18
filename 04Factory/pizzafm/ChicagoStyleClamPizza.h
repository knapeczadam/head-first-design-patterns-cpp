#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class ChicagoStyleClamPizza : public Pizza
    {
    public:
        ChicagoStyleClamPizza();

        ~ChicagoStyleClamPizza() override = default;

        void cut() override;
    };
}
