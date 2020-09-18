#include "CondimentDecorator.h"

namespace decorator
{
    EBeverageSize CondimentDecorator::getSize() const
    {
        return beverage->getSize();
    }

    CondimentDecorator::~CondimentDecorator()
    {

    }
}
