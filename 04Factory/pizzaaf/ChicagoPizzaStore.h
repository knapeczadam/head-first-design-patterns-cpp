#pragma once

#include "PizzaStore.h"

namespace factory::pizzaaf
{
    class ChicagoPizzaStore : public PizzaStore
    {
    protected:
        std::shared_ptr<Pizza> createPizza(const std::string& item) override;

    public:
        ~ChicagoPizzaStore() override = default;
    };
}
