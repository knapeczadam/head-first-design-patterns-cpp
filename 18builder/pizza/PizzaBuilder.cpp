#include "PizzaBuilder.h"

namespace builder::pizza
{
    std::shared_ptr<PizzaBuilder> PizzaBuilder::getPtr()
    {
        return shared_from_this();
    }

    std::shared_ptr<Pizza> PizzaBuilder::build()
    {
        std::shared_ptr<Pizza> pizza = std::make_shared<Pizza>();
        pizza->setName(name);
        pizza->addToppings(toppings);
        return pizza;
    }

    PizzaBuilder::~PizzaBuilder()
    {

    }
}
