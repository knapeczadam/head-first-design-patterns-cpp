#include "NYPizzaStore.h"

#include "CheesePizza.h"
#include "ClamPizza.h"
#include "NYPizzaIngredientFactory.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

namespace factory::pizzaaf
{
    std::shared_ptr<Pizza> NYPizzaStore::createPizza(const std::string& item)
    {
        std::shared_ptr<Pizza> pizza = nullptr;
        std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = std::make_shared<NYPizzaIngredientFactory>();
        if (item == "cheese")
        {
            pizza = std::make_shared<CheesePizza>(ingredientFactory);
            pizza->setName("New York Style Cheese Pizza");
        }
        else if (item == "veggie")
        {
            pizza = std::make_shared<VeggiePizza>(ingredientFactory);
            pizza->setName("New York Style Veggie Pizza");
        }
        else if (item == "clam")
        {
            pizza = std::make_shared<ClamPizza>(ingredientFactory);
            pizza->setName("New York Style Clam Pizza");
        }
        else if (item == "pepperoni")
        {
            pizza = std::make_shared<PepperoniPizza>(ingredientFactory);
            pizza->setName("New York Style Pepperoni Pizza");
        }
        return pizza;
    }
}
