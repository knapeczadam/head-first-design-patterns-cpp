#include "IPepperoni.h"

namespace factory::pizzaaf
{
    IPepperoni::~IPepperoni()
    {

    }

    std::ostream& operator<<(std::ostream& os, const IPepperoni& pepperoni)
    {
        pepperoni.toString(os);
        return os;
    }
}
