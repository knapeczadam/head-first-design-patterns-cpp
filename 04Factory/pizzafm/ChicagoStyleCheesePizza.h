#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class ChicagoStyleCheesePizza : public Pizza
    {
    public:
        ChicagoStyleCheesePizza();

        ~ChicagoStyleCheesePizza() override = default;

        void cut() override;
    };
}
