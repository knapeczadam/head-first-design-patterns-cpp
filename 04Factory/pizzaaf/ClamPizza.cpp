#include "ClamPizza.h"

#include <iostream>
#include <utility>

namespace factory::pizzaaf
{
    void ClamPizza::prepare()
    {
        std::cout << "Preparing " << name << '\n';
        dough = ingredientFactory->createDough();
        sauce = ingredientFactory->createSauce();
        cheese = ingredientFactory->createCheese();
        clam = ingredientFactory->createClam();
    }

    ClamPizza::ClamPizza(std::shared_ptr<IPizzaIngredientFactory> newIngredientFactory) : ingredientFactory{std::move(newIngredientFactory)}
    {

    }
}
