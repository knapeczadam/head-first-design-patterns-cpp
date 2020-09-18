#include "PizzaStore.h"

#include <iostream>

namespace factory::pizzafm
{
    PizzaStore::~PizzaStore()
    {

    }

    std::shared_ptr<Pizza> PizzaStore::orderPizza(const std::string& item)
    {
        std::shared_ptr<Pizza> pizza = createPizza(item);
        std::cout << "--- Making a " << pizza->getName() << " ---" << '\n';
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
}
