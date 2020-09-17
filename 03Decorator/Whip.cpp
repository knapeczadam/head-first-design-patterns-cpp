#include "Whip.h"

namespace decorator
{
    double Whip::cost()
    {
        return beverage->cost() + 0.1f;
    }

    std::string Whip::getDescription() const
    {
        return beverage->getDescription() + ", Whip";
    }

    Whip::Whip(const std::shared_ptr<Beverage>& newBeverage)
    {
        beverage = newBeverage;
    }
}
