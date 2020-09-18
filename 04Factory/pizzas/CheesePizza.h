#pragma once

#include "Pizza.h"

namespace factory::pizzas
{
    class CheesePizza : public Pizza
    {
    public:
        CheesePizza();

        ~CheesePizza() override = default;
    };
}
