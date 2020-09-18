#include "IVeggies.h"

namespace factory::pizzaaf
{
    std::ostream& operator<<(std::ostream& os, const IVeggies& veggies)
    {
        veggies.toString(os);
        return os;
    }
}
