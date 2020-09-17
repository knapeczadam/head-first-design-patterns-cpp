#include "HouseBlend.h"

namespace decorator
{
    double HouseBlend::cost()
    {
        return 0.89f;
    }

    HouseBlend::HouseBlend()
    {
        description = "House Blend Coffee";
    }
}
