#pragma once

#include "SimplePizzaFactory.h"

#include <memory>
#include <string>

namespace factory::pizzas
{
    class PizzaStore
    {
        std::shared_ptr<SimplePizzaFactory> factory = nullptr;

    public:
        explicit PizzaStore(std::shared_ptr<SimplePizzaFactory> newFactory);

        std::shared_ptr<Pizza> orderPizza(const std::string& type);
    };
}
