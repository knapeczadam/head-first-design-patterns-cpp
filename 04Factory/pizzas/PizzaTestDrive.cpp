#include "PizzaStore.h"
#include "SimplePizzaFactory.h"

#include <memory>
#include <iostream>

using factory::pizzas::SimplePizzaFactory;
using factory::pizzas::PizzaStore;
using factory::pizzas::Pizza;

int main()
{
    std::shared_ptr<SimplePizzaFactory> factory = std::make_shared<SimplePizzaFactory>();
    std::shared_ptr<PizzaStore> store = std::make_shared<PizzaStore>(factory);

    std::shared_ptr<Pizza> pizza = store->orderPizza("cheese");
    std::cout << "We ordered a " << pizza->getName() << '\n';
    std::cout << *pizza << '\n';

    pizza = store->orderPizza("veggie");
    std::cout << "We ordered a " << pizza->getName() << '\n';
    std::cout << *pizza;
}
