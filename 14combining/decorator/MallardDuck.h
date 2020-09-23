#pragma once

#include "IQuackable.h"

namespace combining::decorator
{
    class MallardDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
