#include "VeggiePizza.h"

#include <iostream>
#include <utility>

namespace factory::pizzaaf
{
    void VeggiePizza::prepare()
    {
        std::cout << "Preparing " << name << '\n';
        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
        cheese = ingredientFactory->createCheese();
        veggies = ingredientFactory->createVeggies();
    }

    VeggiePizza::VeggiePizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory) : ingredientFactory{std::move(newIngredientFactory)}
    {

    }
}
