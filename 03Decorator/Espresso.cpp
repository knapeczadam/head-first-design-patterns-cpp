#include "Espresso.h"

namespace decorator
{
    double Espresso::cost()
    {
        return 1.99f;
    }

    Espresso::Espresso()
    {
        description = "Espresso";
    }
}
