#pragma once

#include "IPizzaIngredientFactory.h"
#include "Pizza.h"

#include <memory>

namespace factory::pizzaaf
{
    class CheesePizza : public Pizza
    {
        std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = nullptr;

    protected:
        void prepare() override;

    public:
        explicit CheesePizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory);
    };
}
