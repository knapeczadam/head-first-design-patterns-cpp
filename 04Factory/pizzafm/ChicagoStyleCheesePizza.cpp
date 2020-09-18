#include "ChicagoStyleCheesePizza.h"

#include <iostream>

namespace factory::pizzafm
{
    ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
    {
        name = "Chicago Style Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
    }

    void ChicagoStyleCheesePizza::cut()
    {
        std::cout << "Cutting the pizza into square slices" << '\n';
    }
}
