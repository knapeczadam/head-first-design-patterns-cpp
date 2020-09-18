#include "ChicagoStyleClamPizza.h"

#include <iostream>

namespace factory::pizzafm
{
    ChicagoStyleClamPizza::ChicagoStyleClamPizza()
    {
        name = "Chicago Style Clam Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.emplace_back("Shredded Mozzarella Cheese");
        toppings.emplace_back("Frozen IClams from Chesapeake Bay");
    }

    void ChicagoStyleClamPizza::cut()
    {
        std::cout << "Cutting the pizza into square slices" << '\n';
    }
}
