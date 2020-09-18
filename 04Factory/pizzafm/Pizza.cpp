#include "Pizza.h"

#include <iostream>

namespace factory::pizzafm
{
    Pizza::~Pizza()
    {

    }

    void Pizza::prepare()
    {
        std::cout << "Prepare " << name << '\n';
        std::cout << "Tossing dough..." << '\n';
        std::cout << "Adding sauce..." << '\n';
        std::cout << "Adding toppings: " << '\n';
        for (const auto& topping : toppings)
        {
            std::cout << "   " << topping << '\n';
        }
    }

    void Pizza::bake()
    {
        std::cout << "Bake for 25 minutes at 350" << '\n';
    }

    void Pizza::cut()
    {
        std::cout << "Cut the pizza into diagonal slices" << '\n';
    }

    void Pizza::box()
    {
        std::cout << "Place pizza in official PizzaStore box" << '\n';
    }

    std::string Pizza::getName() const
    {
        return name;
    }

    std::ostream& operator<<(std::ostream& os, const Pizza& pizza)
    {
        os << "---- " << pizza.name << " ----\n";
        os << pizza.dough << '\n';
        os << pizza.sauce << '\n';
        for (const auto& topping : pizza.toppings)
        {
            os << topping << '\n';
        }
        return os;
    }
}
