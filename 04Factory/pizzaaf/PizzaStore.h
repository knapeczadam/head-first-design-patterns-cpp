#pragma once

#include "Pizza.h"

#include <memory>
#include <string>

namespace factory::pizzaaf
{
    class PizzaStore
    {
    protected:
        virtual std::shared_ptr<Pizza> createPizza(const std::string& item) = 0;

    public:
        std::shared_ptr<Pizza> orderPizza(const std::string& type);

        virtual ~PizzaStore() = 0;
    };
}
