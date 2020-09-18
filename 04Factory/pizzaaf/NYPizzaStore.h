#pragma once

#include "PizzaStore.h"

namespace factory::pizzaaf
{
    class NYPizzaStore : public PizzaStore
    {
    protected:
        std::shared_ptr<Pizza> createPizza(const std::string& item) override;
    };
}
