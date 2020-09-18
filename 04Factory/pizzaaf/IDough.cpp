#include "IDough.h"

namespace factory::pizzaaf
{
    std::ostream& operator<<(std::ostream& os, const IDough& dough)
    {
        dough.toString(os);
        return os;
    }
}
