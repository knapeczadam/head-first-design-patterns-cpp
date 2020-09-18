#pragma once

#include "Pizza.h"

namespace factory::pizzafm
{
    class NYStyleCheesePizza : public Pizza
    {
    public:
        NYStyleCheesePizza();

        ~NYStyleCheesePizza() override = default;
    };
}
