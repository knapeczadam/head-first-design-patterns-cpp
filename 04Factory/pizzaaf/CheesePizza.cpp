#include "CheesePizza.h"

#include <iostream>
#include <utility>

namespace factory::pizzaaf
{
    void CheesePizza::prepare()
    {
        std::cout << "Preparing " << name << '\n';
        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
        cheese = ingredientFactory->createCheese();
    }

    CheesePizza::CheesePizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory) : ingredientFactory{std::move(newIngredientFactory)}
    {

    }
}
