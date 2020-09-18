#include "NYStyleCheesePizza.h"

namespace factory::pizzafm
{
    NYStyleCheesePizza::NYStyleCheesePizza()
    {
        name = "NY Style Sauce and Cheese Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";

        toppings.emplace_back("Grated Reegiano Cheese");
    }
}
