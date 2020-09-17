#include "Mocha.h"

namespace decorator
{
    double Mocha::cost()
    {
        return beverage->cost() + 0.2f;
    }

    std::string Mocha::getDescription() const
    {
        return beverage->getDescription() + ", Mocha";
    }

    Mocha::Mocha(const std::shared_ptr<Beverage>& newBeverage)
    {
        beverage = newBeverage;
    }
}
