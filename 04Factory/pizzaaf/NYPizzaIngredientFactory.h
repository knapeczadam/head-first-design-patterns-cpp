#pragma once

#include "IPizzaIngredientFactory.h"

namespace factory::pizzaaf
{
    class NYPizzaIngredientFactory : public IPizzaIngredientFactory
    {
    public:
        std::shared_ptr<IDough> createDough() override;

        std::shared_ptr<ISauce> createSauce() override;

        std::shared_ptr<ICheese> createCheese() override;

        std::list<std::shared_ptr<IVeggies>> createVeggies() override;

        std::shared_ptr<IPepperoni> createPepperoni() override;

        std::shared_ptr<IClams> createClam() override;
    };
}
