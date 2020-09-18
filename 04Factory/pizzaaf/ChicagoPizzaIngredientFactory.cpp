#include "ChicagoPizzaIngredientFactory.h"

#include "BlackOlives.h"
#include "Eggplant.h"
#include "FrozenClams.h"
#include "MozzarellaCheese.h"
#include "PlumTomatoSauce.h"
#include "SlicedPepperoni.h"
#include "Spinach.h"
#include "ThickCrustDough.h"

namespace factory::pizzaaf
{
    std::shared_ptr<IDough> ChicagoPizzaIngredientFactory::createDough()
    {
        return std::make_shared<ThickCrustDough>();
    }

    std::shared_ptr<ISauce> ChicagoPizzaIngredientFactory::createSauce()
    {
        return std::make_shared<PlumTomatoSauce>();
    }

    std::shared_ptr<ICheese> ChicagoPizzaIngredientFactory::createCheese()
    {
        return std::make_shared<MozzarellaCheese>();
    }

    std::list<std::shared_ptr<IVeggies>> ChicagoPizzaIngredientFactory::createVeggies()
    {
        std::list<std::shared_ptr<IVeggies>> veggies;
        veggies.emplace_back(std::make_shared<BlackOlives>());
        veggies.emplace_back(std::make_shared<Spinach>());
        veggies.emplace_back(std::make_shared<Eggplant>());
        return veggies;
    }

    std::shared_ptr<IPepperoni> ChicagoPizzaIngredientFactory::createPepperoni()
    {
        return std::make_shared<SlicedPepperoni>();
    }

    std::shared_ptr<IClams> ChicagoPizzaIngredientFactory::createClam()
    {
        return std::make_shared<FrozenClams>();
    }
}
