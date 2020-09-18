#include "ISauce.h"

namespace factory::pizzaaf
{
    ISauce::~ISauce()
    {

    }

    std::ostream& operator<<(std::ostream& os, const ISauce& sauce)
    {
        sauce.toString(os);
        return os;
    }
}
