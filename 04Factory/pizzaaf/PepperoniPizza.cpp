#include "PepperoniPizza.h"

#include <iostream>
#include <utility>

namespace factory::pizzaaf
{
    void PepperoniPizza::prepare()
    {
        std::cout << "Preparing " << name;
        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
        cheese = ingredientFactory->createCheese();
        veggies = ingredientFactory->createVeggies();
        pepperoni = ingredientFactory->createPepperoni();
    }

    PepperoniPizza::PepperoniPizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory) : ingredientFactory{std::move(newIngredientFactory)}
    {

    }
}
