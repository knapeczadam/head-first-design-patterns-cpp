#include "VeggieLoversPizzaBuilder.h"

namespace builder::pizza
{
    VeggieLoversPizzaBuilder::VeggieLoversPizzaBuilder()
    {
        name = "Veggie Lovers Pizza";
    }
    std::shared_ptr<PizzaBuilder> VeggieLoversPizzaBuilder::addCheese()
    {
        toppings.emplace_back("parmesan");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> VeggieLoversPizzaBuilder::addSauce()
    {
        toppings.emplace_back("sauce");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> VeggieLoversPizzaBuilder::addTomatoes()
    {
        toppings.emplace_back("chopped tomatoes");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> VeggieLoversPizzaBuilder::addGarlic()
    {
        toppings.emplace_back("garlic");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> VeggieLoversPizzaBuilder::addOlives()
    {
        toppings.emplace_back("green olives");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> VeggieLoversPizzaBuilder::addSpinach()
    {
        toppings.emplace_back("spinach");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> VeggieLoversPizzaBuilder::addPepperoni()
    {
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> VeggieLoversPizzaBuilder::addSausage()
    {
        return getPtr();
    }
}
