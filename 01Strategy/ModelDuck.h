#pragma once

#include "Duck.h"

namespace strategy
{
    class ModelDuck : public Duck
    {
    public:
        void display() const override;

        ModelDuck();
    };
}
