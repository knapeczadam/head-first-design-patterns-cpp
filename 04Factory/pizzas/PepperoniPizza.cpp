#include "PepperoniPizza.h"

namespace factory::pizzas
{
    PepperoniPizza::PepperoniPizza()
    {
        name = "Pepperoni Pizza";
        dough = "Crust";
        sauce = "Marinara sauce";
        toppings.emplace_back("Sliced Pepperoni");
        toppings.emplace_back("Sliced Onion");
        toppings.emplace_back("Grated parmesan cheese");
    }
}
