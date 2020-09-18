#include "IClams.h"

namespace factory::pizzaaf
{
    IClams::~IClams()
    {

    }

    std::ostream& operator<<(std::ostream& os, const IClams& clams)
    {
        clams.toString(os);
        return os;
    }
}
