#pragma once

#include "ICheese.h"
#include "IClams.h"
#include "IDough.h"
#include "ISauce.h"
#include "IPepperoni.h"
#include "IVeggies.h"

#include <list>
#include <memory>

namespace factory::pizzaaf
{
    class IPizzaIngredientFactory
    {
    public:
        virtual ~IPizzaIngredientFactory() = 0;

        virtual std::shared_ptr<IDough> createDough() = 0;

        virtual std::shared_ptr<ISauce> createSauce() = 0;

        virtual std::shared_ptr<ICheese> createCheese() = 0;

        virtual std::list<std::shared_ptr<IVeggies>> createVeggies() = 0;

        virtual std::shared_ptr<IPepperoni> createPepperoni() = 0;

        virtual std::shared_ptr<IClams> createClam() = 0;
    };
}
