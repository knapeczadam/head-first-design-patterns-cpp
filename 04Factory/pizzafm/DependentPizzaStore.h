#pragma once

#include "Pizza.h"

#include <memory>
#include <string>

namespace factory::pizzafm
{
    class DependentPizzaStore
    {
    public:
        std::shared_ptr<Pizza> createPizza(const std::string& style, const std::string& type);
    };
}
