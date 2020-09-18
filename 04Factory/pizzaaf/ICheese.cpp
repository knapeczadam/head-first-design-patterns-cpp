#include "ICheese.h"

namespace factory::pizzaaf
{
    std::ostream& operator<<(std::ostream& os, const ICheese& cheese)
    {
        cheese.toString(os);
        return os;
    }
}
