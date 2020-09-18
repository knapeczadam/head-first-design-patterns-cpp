#include "VeggiePizza.h"

namespace factory::pizzas
{
    VeggiePizza::VeggiePizza()
    {
        name = "Veggie Pizza";
        dough = "Crust";
        sauce = "Marinara sauce";
        toppings.emplace_back("Shredded mozzarella");
        toppings.emplace_back("Grated parmesan");
        toppings.emplace_back("Diced onion");
        toppings.emplace_back("Sliced mushrooms");
        toppings.emplace_back("Sliced red pepper");
        toppings.emplace_back("Sliced black olives");
    }
}
