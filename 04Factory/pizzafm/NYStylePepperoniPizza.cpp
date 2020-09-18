#include "NYStylePepperoniPizza.h"

namespace factory::pizzafm
{
    NYStylePepperoniPizza::NYStylePepperoniPizza()
    {
        name = "NY Style Pepperoni Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";

        toppings.emplace_back("Grated Reggiano Cheese");
        toppings.emplace_back("Sliced Pepperoni");
        toppings.emplace_back("Garlic");
        toppings.emplace_back("Onion");
        toppings.emplace_back("Mushrooms");
        toppings.emplace_back("Red Pepper");
    }
}
