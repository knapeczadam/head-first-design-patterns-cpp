#pragma once

#include "IPizzaIngredientFactory.h"
#include "Pizza.h"

#include <memory>

namespace factory::pizzaaf
{
    class PepperoniPizza : public Pizza
    {
        std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = nullptr;

    public:
        PepperoniPizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory);

        void prepare() override;
    };
}
