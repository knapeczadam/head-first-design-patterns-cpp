#include "ChicagoStyleVeggiePizza.h"

#include <iostream>

namespace factory::pizzafm
{
    ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
    {
        name = "Chicago Deep Dish Veggie Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";

        toppings.emplace_back("Shredded Mozzarella Cheese");
        toppings.emplace_back("Black Olives");
        toppings.emplace_back("Spinach");
        toppings.emplace_back("Eggplant");
    }

    void ChicagoStyleVeggiePizza::cut()
    {
        std::cout << "Cutting the pizza into square slices" << '\n';
    }
}
