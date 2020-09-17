#include "DarkRoast.h"

namespace decorator
{
    double DarkRoast::cost()
    {
        return 0.99f;
    }

    DarkRoast::DarkRoast()
    {
        description = "Dark Roast Coffee";
    }
}
