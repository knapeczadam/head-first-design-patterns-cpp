#pragma once

#include "Duck.h"

namespace strategy
{
    class DecoyDuck : public Duck
    {
    public:
        DecoyDuck();

        ~DecoyDuck() override = default;

        void display() const override;
    };
}
