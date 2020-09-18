#include "IPepperoni.h"

namespace factory::pizzaaf
{
    std::ostream& operator<<(std::ostream& os, const IPepperoni& pepperoni)
    {
        pepperoni.toString(os);
        return os;
    }
}
