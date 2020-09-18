#include "NYPizzaStore.h"

#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleVeggiePizza.h"

namespace factory::pizzafm
{
    std::shared_ptr<Pizza> NYPizzaStore::createPizza(const std::string& item)
    {
        std::shared_ptr<Pizza> pizza = nullptr;
        if (item == "cheese")
        {
            pizza = std::make_shared<NYStyleCheesePizza>();
        }
        else if (item == "veggie")
        {
            pizza = std::make_shared<NYStyleVeggiePizza>();
        }
        else if (item == "clam")
        {
            pizza = std::make_shared<NYStyleClamPizza>();
        }
        else if (item == "pepperoni")
        {
            pizza = std::make_shared<NYStylePepperoniPizza>();
        }
        return pizza;
    }
}
