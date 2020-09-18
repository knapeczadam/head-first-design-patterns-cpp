#include "CheesePizza.h"

namespace factory::pizzas
{
    CheesePizza::CheesePizza()
    {
        name = "Cheese Pizza";
        dough = "Regular Crust";
        sauce = "Marinara Pizza Sauce";
        toppings.emplace_back("Fresh Mozzarella");
        toppings.emplace_back("Parmesan");
    }
}
