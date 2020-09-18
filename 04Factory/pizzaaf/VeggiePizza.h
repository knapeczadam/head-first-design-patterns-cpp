#pragma once

#include "IPizzaIngredientFactory.h"
#include "Pizza.h"

#include <memory>

namespace factory::pizzaaf
{
    class VeggiePizza : public Pizza
    {
        std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = nullptr;

    public:
        explicit VeggiePizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory);

        ~VeggiePizza() override = default;

        void prepare() override;
    };
}
