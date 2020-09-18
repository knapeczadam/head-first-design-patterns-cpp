#include "IVeggies.h"

namespace factory::pizzaaf
{
    IVeggies::~IVeggies()
    {

    }

    std::ostream& operator<<(std::ostream& os, const IVeggies& veggies)
    {
        veggies.toString(os);
        return os;
    }
}
