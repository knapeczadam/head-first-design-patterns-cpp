#pragma once

#include "IQuackable.h"

namespace combining::factory
{
    class MallardDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
