#pragma once

#include "Pizza.h"

#include <memory>
#include <string>

namespace factory::pizzas
{
    class SimplePizzaFactory
    {
    public:
        std::shared_ptr<Pizza> createPizza(const std::string& type);
    };
}
