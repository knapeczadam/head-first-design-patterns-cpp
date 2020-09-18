#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class ChicagoStyleCheesePizza : public Pizza
    {
    public:
        ChicagoStyleCheesePizza();

        void cut() override;
    };
}
