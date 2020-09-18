#include "ClamPizza.h"

namespace factory::pizzas
{
    ClamPizza::ClamPizza()
    {
        name = "Clam Pizza";
        dough = "Thin crust";
        sauce = "White garlic sauce";
        toppings.emplace_back("IClams");
        toppings.emplace_back("Grated parmesan cheese");
    }
}
