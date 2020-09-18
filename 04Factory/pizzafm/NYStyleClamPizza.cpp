#include "NYStyleClamPizza.h"

namespace factory::pizzafm
{
    NYStyleClamPizza::NYStyleClamPizza()
    {
        name = "NY Style Clam Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";

        toppings.emplace_back("Grated Reggiano Cheese");
        toppings.emplace_back("Fresh IClams from Long Island Sound");
    }
}
