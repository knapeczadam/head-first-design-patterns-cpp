#include "DependentPizzaStore.h"

#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleVeggiePizza.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleVeggiePizza.h"

#include <iostream>

namespace factory::pizzafm
{
    std::shared_ptr<Pizza> DependentPizzaStore::createPizza(const std::string& style, const std::string& type)
    {
        std::shared_ptr<Pizza> pizza = nullptr;
        if (style == "NY")
        {
            if (type == "cheese")
            {
                pizza = std::make_shared<NYStyleCheesePizza>();
            }
            else if (type == "veggie")
            {
                pizza = std::make_shared<NYStyleVeggiePizza>();
            }
            else if (type == "clam")
            {
                pizza = std::make_shared<NYStyleClamPizza>();
            }
            else if (type == "pepperoni")
            {
                pizza = std::make_shared<NYStylePepperoniPizza>();
            }
        }
        else if (style == "Chicago")
        {
            if (type == "cheese")
            {
                pizza = std::make_shared<ChicagoStyleCheesePizza>();
            }
            else if (type == "veggie")
            {
                pizza = std::make_shared<ChicagoStyleVeggiePizza>();
            }
            else if (type == "clam")
            {
                pizza = std::make_shared<ChicagoStyleClamPizza>();
            }
            else if (type == "pepperoni")
            {
                pizza = std::make_shared<ChicagoStylePepperoniPizza>();
            }
        }
        else
        {
            std::cout << "Error: invalid type of pizza" << '\n';
            return nullptr;
        }
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
}
