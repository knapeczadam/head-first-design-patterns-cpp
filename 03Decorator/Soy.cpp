#include "Soy.h"

namespace decorator
{
    double Soy::cost()
    {
        double cost = beverage->cost();
        if (getSize() == EBeverageSize::Tall)
        {
            cost += 0.1f;
        }
        else if (getSize() == EBeverageSize::Grande)
        {
            cost += 0.15f;
        }
        else if (getSize() == EBeverageSize::Venti)
        {
            cost += 0.2f;
        }
        return cost;
    }

    std::string Soy::getDescription() const
    {
        return beverage->getDescription() + ", Soy";
    }

    Soy::Soy(const std::shared_ptr<Beverage>& newBeverage)
    {
        beverage = newBeverage;
    }
}
