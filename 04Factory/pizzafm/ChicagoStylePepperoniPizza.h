#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class ChicagoStylePepperoniPizza : public Pizza
    {
    public:
        ChicagoStylePepperoniPizza();

        ~ChicagoStylePepperoniPizza() override = default;

        void cut() override;
    };
}
