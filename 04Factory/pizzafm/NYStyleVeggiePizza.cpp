#include "NYStyleVeggiePizza.h"

namespace factory::pizzafm
{
    NYStyleVeggiePizza::NYStyleVeggiePizza()
    {
        name = "NY Style Veggie Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";

        toppings.emplace_back("Grated Reggiano Cheese");
        toppings.emplace_back("Garlic");
        toppings.emplace_back("Onion");
        toppings.emplace_back("Mushrooms");
        toppings.emplace_back("Red Pepper");
    }
}
