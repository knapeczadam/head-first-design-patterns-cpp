#include "IClams.h"

namespace factory::pizzaaf
{
    std::ostream& operator<<(std::ostream& os, const IClams& clams)
    {
        clams.toString(os);
        return os;
    }
}
