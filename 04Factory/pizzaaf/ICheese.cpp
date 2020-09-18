#include "ICheese.h"

namespace factory::pizzaaf
{
    ICheese::~ICheese()
    {

    }

    std::ostream& operator<<(std::ostream& os, const ICheese& cheese)
    {
        cheese.toString(os);
        return os;
    }
}
