#pragma once

#include "Pizza.h"

#include <memory>
#include <string>

namespace factory::pizzafm
{
    class PizzaStore
    {
    protected:
        virtual std::shared_ptr<Pizza> createPizza(const std::string& item) = 0;

    public:
        virtual ~PizzaStore() = 0;

        std::shared_ptr<Pizza> orderPizza(const std::string& item);
    };
}
