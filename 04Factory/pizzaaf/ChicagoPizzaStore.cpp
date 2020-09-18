#include "ChicagoPizzaStore.h"

#include "CheesePizza.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "ClamPizza.h"
#include "IPizzaIngredientFactory.h"
#include "PepperoniPizza.h"
#include "VeggiePizza.h"

#include <memory>

namespace factory::pizzaaf
{
    std::shared_ptr<Pizza> ChicagoPizzaStore::createPizza(const std::string& item)
    {
        std::shared_ptr<Pizza> pizza = nullptr;
        std::shared_ptr<IPizzaIngredientFactory> ingredientFactory = std::make_shared<ChicagoPizzaIngredientFactory>();
        if (item == "cheese")
        {
            pizza = std::make_shared<CheesePizza>(ingredientFactory);
            pizza->setName("Chicago Style Cheese Pizza");
        }
        else if (item == "veggie")
        {
            pizza = std::make_shared<VeggiePizza>(ingredientFactory);
            pizza->setName("Chicago Style Veggie Pizza");
        }
        else if (item == "clam")
        {
            pizza = std::make_shared<ClamPizza>(ingredientFactory);
            pizza->setName("Chicago Style Clam Pizza");
        }
        else if (item == "pepperoni")
        {
            pizza = std::make_shared<PepperoniPizza>(ingredientFactory);
            pizza->setName("Chicago Style Pepperoni Pizza");
        }
        return pizza;
    }
}
