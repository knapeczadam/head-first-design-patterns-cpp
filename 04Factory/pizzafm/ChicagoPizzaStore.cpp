#include "ChicagoPizzaStore.h"

#include "ChicagoStyleClamPizza.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleVeggiePizza.h"

namespace factory::pizzafm
{
    std::shared_ptr<Pizza> ChicagoPizzaStore::createPizza(const std::string& item)
    {
        std::shared_ptr<Pizza> pizza = nullptr;
        if (item == "cheese")
        {
            pizza = std::make_shared<ChicagoStyleCheesePizza>();
        }
        else if (item == "veggie")
        {
            pizza = std::make_shared<ChicagoStyleVeggiePizza>();
        }
        else if (item == "clam")
        {
            pizza = std::make_shared<ChicagoStyleClamPizza>();
        }
        else if (item == "pepperoni")
        {
            pizza = std::make_shared<ChicagoStylePepperoniPizza>();
        }
        return pizza;
    }
}
