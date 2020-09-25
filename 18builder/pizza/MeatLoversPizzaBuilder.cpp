#include "MeatLoversPizzaBuilder.h"

namespace builder::pizza
{
    MeatLoversPizzaBuilder::MeatLoversPizzaBuilder()
    {
        name = "Meat Lovers Pizza";
    }
    std::shared_ptr<PizzaBuilder> MeatLoversPizzaBuilder::addCheese()
    {
        toppings.emplace_back("mozzarella");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> MeatLoversPizzaBuilder::addSauce()
    {
        toppings.emplace_back("NY style sauce");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> MeatLoversPizzaBuilder::addTomatoes()
    {
        toppings.emplace_back("sliced tomatoes");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> MeatLoversPizzaBuilder::addGarlic()
    {
        toppings.emplace_back("garlic");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> MeatLoversPizzaBuilder::addOlives()
    {
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> MeatLoversPizzaBuilder::addSpinach()
    {
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> MeatLoversPizzaBuilder::addPepperoni()
    {
        toppings.emplace_back("pepperoni");
        return getPtr();
    }

    std::shared_ptr<PizzaBuilder> MeatLoversPizzaBuilder::addSausage()
    {
        toppings.emplace_back("sausage");
        return getPtr();
    }
}
