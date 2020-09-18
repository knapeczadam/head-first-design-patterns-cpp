#pragma once

#include "Duck.h"

namespace strategy
{
    class RubberDuck : public Duck
    {
    public:
        void display() const override;

        RubberDuck();

        ~RubberDuck() override = default;
    };
}
