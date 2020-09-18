#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
#include "PizzaStore.h"
#include "Pizza.h"

#include <memory>
#include <iostream>

using factory::pizzaaf::PizzaStore;
using factory::pizzaaf::NYPizzaStore;
using factory::pizzaaf::ChicagoPizzaStore;
using factory::pizzaaf::Pizza;

int main()
{
    std::unique_ptr<PizzaStore> nyStore = std::make_unique<NYPizzaStore>();
    std::unique_ptr<PizzaStore> chicagoStore = std::make_unique<ChicagoPizzaStore>();

    std::shared_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << *pizza << '\n';

    pizza = chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered a " << *pizza << '\n';

    pizza = nyStore->orderPizza("clam");
    std::cout << "Ethan ordered a " << *pizza << '\n';

    pizza = chicagoStore->orderPizza("clam");
    std::cout << "Joel ordered a " << *pizza << '\n';

    pizza = nyStore->orderPizza("pepperoni");
    std::cout << "Ethan ordered a " << *pizza << '\n';

    pizza = chicagoStore->orderPizza("pepperoni");
    std::cout << "Joel ordered a " << *pizza << '\n';

    pizza = nyStore->orderPizza("veggie");
    std::cout << "Ethan ordered a " << *pizza << '\n';

    pizza = chicagoStore->orderPizza("veggie");
    std::cout << "Joel ordered a " << *pizza;
}
