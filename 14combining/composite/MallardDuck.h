#pragma once

#include "IQuackable.h"

namespace combining::composite
{
    class MallardDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
