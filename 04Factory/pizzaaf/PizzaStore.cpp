#include "PizzaStore.h"

#include <iostream>

namespace factory::pizzaaf
{
    std::shared_ptr<Pizza> PizzaStore::orderPizza(const std::string& type)
    {
        std::shared_ptr<Pizza> pizza = createPizza(type);
        std::cout << "--- Making a " << pizza->getName() << " ---" << '\n';
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }

    PizzaStore::~PizzaStore()
    {

    }
}
