#pragma once

#include "Duck.h"

namespace strategy
{
    class MallardDuck : public Duck
    {
    public:
        void display() const override;

        MallardDuck();
    };
}


