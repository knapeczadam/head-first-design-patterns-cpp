#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class ChicagoStylePepperoniPizza : public Pizza
    {
    public:
        ChicagoStylePepperoniPizza();

        void cut() override;
    };
}
