#include "NYPizzaIngredientFactory.h"

#include "FreshClams.h"
#include "Garlic.h"
#include "MarinaraSauce.h"
#include "Mushroom.h"
#include "Onion.h"
#include "RedPepper.h"
#include "ReggianoCheese.h"
#include "SlicedPepperoni.h"
#include "ThinCrustDough.h"

namespace factory::pizzaaf
{
    std::shared_ptr<IDough> NYPizzaIngredientFactory::createDough()
    {
        return std::make_shared<ThinCrustDough>();
    }

    std::shared_ptr<ISauce> NYPizzaIngredientFactory::createSauce()
    {
        return std::make_shared<MarinaraSauce>();
    }

    std::shared_ptr<ICheese> NYPizzaIngredientFactory::createCheese()
    {
        return std::make_shared<ReggianoCheese>();
    }

    std::list<std::shared_ptr<IVeggies>> NYPizzaIngredientFactory::createVeggies()
    {
        std::list<std::shared_ptr<IVeggies>> veggies;
        veggies.emplace_back(std::make_shared<Garlic>());
        veggies.emplace_back(std::make_shared<Onion>());
        veggies.emplace_back(std::make_shared<Mushroom>());
        veggies.emplace_back(std::make_shared<RedPepper>());
        return veggies;
    }

    std::shared_ptr<IPepperoni> NYPizzaIngredientFactory::createPepperoni()
    {
        return std::make_shared<SlicedPepperoni>();
    }

    std::shared_ptr<IClams> NYPizzaIngredientFactory::createClam()
    {
        return std::make_shared<FreshClams>();
    }
}
