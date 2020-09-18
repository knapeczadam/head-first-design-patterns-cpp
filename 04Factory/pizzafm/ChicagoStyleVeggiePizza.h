#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class ChicagoStyleVeggiePizza : public Pizza
    {
    public:
        ChicagoStyleVeggiePizza();

        void cut() override;
    };
}
