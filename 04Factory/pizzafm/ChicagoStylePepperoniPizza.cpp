#include "ChicagoStylePepperoniPizza.h"

#include <iostream>

namespace factory::pizzafm
{
    ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
    {
        name = "Chicago style Pepperoni Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";

        toppings.emplace_back("Shredded Mozzarella Cheese");
        toppings.emplace_back("Black Olives");
        toppings.emplace_back("Spinach");
        toppings.emplace_back("Eggplant");
        toppings.emplace_back("Sliced Pepperoni");
    }

    void ChicagoStylePepperoniPizza::cut()
    {
        std::cout << "Cutting the pizza into square slices" << '\n';
    }
}
