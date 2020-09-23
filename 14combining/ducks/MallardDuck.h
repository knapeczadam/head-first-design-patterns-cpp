#pragma once

#include "IQuackable.h"

namespace combining::ducks
{
    class MallardDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
