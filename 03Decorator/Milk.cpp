#include "Milk.h"

namespace decorator
{
    double Milk::cost()
    {
        return beverage->cost() + 0.1f;
    }

    std::string Milk::getDescription() const
    {
        return beverage->getDescription() + ", Milk";
    }

    Milk::Milk(const std::shared_ptr<Beverage>& newBeverage)
    {
        beverage = newBeverage;
    }
}
