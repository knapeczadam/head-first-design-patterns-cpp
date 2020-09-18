#pragma once

#include "PizzaStore.h"

namespace factory::pizzafm
{
    class NYPizzaStore : public PizzaStore
    {
    public:
        std::shared_ptr<Pizza> createPizza(const std::string& item) override;

        ~NYPizzaStore() override = default;
    };
}
