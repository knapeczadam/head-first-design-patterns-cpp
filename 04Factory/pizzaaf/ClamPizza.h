#pragma once

#include "IPizzaIngredientFactory.h"
#include "Pizza.h"

#include <memory>

namespace factory::pizzaaf
{
    class ClamPizza : public Pizza
    {
        std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = nullptr;

    public:
        explicit ClamPizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory);

        ~ClamPizza() override = default;

        void prepare() override;
    };
}
