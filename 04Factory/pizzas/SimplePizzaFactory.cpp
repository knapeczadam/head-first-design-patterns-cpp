#include "SimplePizzaFactory.h"

#include "ClamPizza.h"
#include "CheesePizza.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

namespace factory::pizzas
{
    std::shared_ptr<Pizza> SimplePizzaFactory::createPizza(const std::string& type)
    {
        std::shared_ptr<Pizza> pizza = nullptr;
        if (type == "cheese")
        {
            pizza = std::make_shared<CheesePizza>();
        }
        else if (type == "pepperoni")
        {
            pizza = std::make_shared<PepperoniPizza>();
        }
        else if (type == "clam")
        {
            pizza = std::make_shared<ClamPizza>();
        }
        else if (type == "veggie")
        {
            pizza = std::make_shared<VeggiePizza>();
        }
        return pizza;
    }
}
