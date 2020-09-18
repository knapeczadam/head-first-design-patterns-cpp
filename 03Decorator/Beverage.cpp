#include "Beverage.h"

namespace decorator
{
    std::string Beverage::getDescription() const
    {
        return description;
    }

    EBeverageSize Beverage::getSize() const
    {
        return size;
    }

    void Beverage::setSize(EBeverageSize newSize)
    {
        size = newSize;
    }

    Beverage::~Beverage()
    {

    }
}
