#include "Pizza.h"

#include <iostream>

namespace factory::pizzaaf
{
    void Pizza::bake() const
    {
        std::cout << "Bake for 25 minutes at 350" << '\n';
    }

    void Pizza::cut() const
    {
        std::cout << "Cutting the pizza into diagonal slices" << '\n';
    }

    void Pizza::box() const
    {
        std::cout << "Place pizza in official PizzaStore box" << '\n';
    }

    void Pizza::setName(const std::string& newName)
    {
        name = newName;
    }

    std::string Pizza::getName() const
    {
        return name;
    }

    std::ostream& operator<<(std::ostream& os, const Pizza& pizza)
    {
        os << "----" << pizza.name << "----" << '\n';
        if (pizza.dough)
        {
            os << *pizza.dough << '\n';
        }
        if (pizza.sauce)
        {
            os << *pizza.sauce << '\n';
        }
        if (pizza.cheese)
        {
            os << *pizza.cheese << '\n';
        }
        if (!pizza.veggies.empty())
        {
            int i = 0;
            for (const auto& veggie : pizza.veggies)
            {
                std::cout << *veggie;
                ++i;
                if (i < pizza.veggies.size())
                {
                    os << ", ";
                }
            }
            os << '\n';
        }
        if (pizza.clam)
        {
            os << *pizza.clam << '\n';
        }
        return os;
    }

    Pizza::~Pizza()
    {

    }
}
