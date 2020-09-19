#pragma once

#include "IDuck.h"

namespace adapter::ducks
{
    class MallardDuck : public IDuck
    {
    public:
        void quack() override;

        void fly() override;
    };
}
