#pragma once

#include "Pizza.h"

namespace factory::pizzas
{
    class ClamPizza : public Pizza
    {
    public:
        ClamPizza();

        ~ClamPizza() override = default;
    };
}
