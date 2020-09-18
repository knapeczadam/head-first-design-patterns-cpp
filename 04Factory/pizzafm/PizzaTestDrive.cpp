#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
#include "PizzaStore.h"

#include <memory>
#include <iostream>

using factory::pizzafm::PizzaStore;
using factory::pizzafm::NYPizzaStore;
using factory::pizzafm::ChicagoPizzaStore;
using factory::pizzafm::Pizza;

int main()
{
    std::shared_ptr<PizzaStore> nyStore = std::make_shared<NYPizzaStore>();
    std::shared_ptr<PizzaStore> chicagoStore = std::make_shared<ChicagoPizzaStore>();

    std::shared_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n";

    pizza = chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered a " << pizza->getName() << "\n\n";

    pizza = nyStore->orderPizza("clam");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n";

    pizza = chicagoStore->orderPizza("clam");
    std::cout << "Joel ordered a " << pizza->getName() << "\n\n";

    pizza = nyStore->orderPizza("pepperoni");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n";

    pizza = chicagoStore->orderPizza("pepperoni");
    std::cout << "Joel ordered a " << pizza->getName() << "\n\n";

    pizza = nyStore->orderPizza("veggie");
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n";

    pizza = chicagoStore->orderPizza("veggie");
    std::cout << "Joel ordered a " << pizza->getName();
}
