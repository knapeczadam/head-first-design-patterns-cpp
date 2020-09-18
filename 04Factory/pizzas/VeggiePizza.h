#pragma once

#include "Pizza.h"

namespace factory::pizzas
{
    class VeggiePizza : public Pizza
    {
    public:
        VeggiePizza();

        ~VeggiePizza() override = default;
    };
}
