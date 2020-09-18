#include "Pizza.h"

#include <iostream>

namespace factory::pizzas
{
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

    std::string Pizza::getName() const
    {
        return name;
    }

    void Pizza::prepare() const
    {
        std::cout << "Preparing " << name << '\n';
    }

    void Pizza::bake() const
    {
        std::cout << "Baking " << name << '\n';
    }

    void Pizza::cut() const
    {
        std::cout << "Cutting " << name << '\n';
    }

    void Pizza::box() const
    {
        std::cout << "Boxing " << name << '\n';
    }

    Pizza::~Pizza()
    {

    }
}
