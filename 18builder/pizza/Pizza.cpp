#include "Pizza.h"

#include <iostream>

namespace builder::pizza
{
    void Pizza::addToppings(const std::vector<std::string>& newToppings)
    {
        toppings = newToppings;
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

    void Pizza::setName(const std::string& newName)
    {
        name = newName;
    }

    std::ostream& operator<<(std::ostream& os, const Pizza& pizza)
    {
        os << "---- " << pizza.name << " ----\n";
        for (const auto& topping : pizza.toppings)
        {
            os << topping << '\n';
        }
        return os;
    }
}
