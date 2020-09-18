#pragma once

#include "PizzaStore.h"

#include <string>

namespace factory::pizzafm
{
    class ChicagoPizzaStore : public PizzaStore
    {
    public:
        std::shared_ptr<Pizza> createPizza(const std::string& item) override;

        ~ChicagoPizzaStore() override = default;
    };
}
