#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class ChicagoStyleClamPizza : public Pizza
    {
    public:
        ChicagoStyleClamPizza();

        void cut() override;
    };
}
