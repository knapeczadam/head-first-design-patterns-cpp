#pragma once

#include "Duck.h"

namespace strategy
{
    class RedHeadDuck : public Duck
    {
    public:
        void display() const override;

        RedHeadDuck();
    };
}
