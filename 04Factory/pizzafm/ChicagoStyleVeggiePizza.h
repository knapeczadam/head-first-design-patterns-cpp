#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class ChicagoStyleVeggiePizza : public Pizza
    {
    public:
        ChicagoStyleVeggiePizza();

        ~ChicagoStyleVeggiePizza() override = default;

        void cut() override;
    };
}
