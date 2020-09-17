#include "SteamedMilk.h"

namespace decorator
{
    double SteamedMilk::cost()
    {
        return beverage->cost() + 0.1f;
    }

    std::string SteamedMilk::getDescription() const
    {
        return beverage->getDescription() + ", Steamed Milk";
    }

    SteamedMilk::SteamedMilk(const std::shared_ptr<Beverage>& newBeverage)
    {
        beverage = newBeverage;
    }
}
