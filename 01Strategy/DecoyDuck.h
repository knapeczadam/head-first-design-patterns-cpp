#pragma once

#include "Duck.h"

namespace strategy
{
    class DecoyDuck : public Duck
    {
    public:
        DecoyDuck();

        void display() const override;
    };
}
