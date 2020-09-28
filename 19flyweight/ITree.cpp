#include "ITree.h"

namespace flyweight
{
    bool ITree::isWithinRage(int month)
    {
        return month > 2 && month < 11;
    }
}
