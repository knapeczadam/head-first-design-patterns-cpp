#pragma once

#include "IPizzaIngredientFactory.h"
#include "Pizza.h"

#include <memory>

namespace factory::pizzaaf
{
    class ClamPizza : public Pizza
    {
        std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = nullptr;

    protected:
        void prepare() override;

    public:
        explicit ClamPizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory);
    };
}
