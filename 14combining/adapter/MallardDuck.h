#pragma once

#include "IQuackable.h"

namespace combining::adapter
{
    class MallardDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
