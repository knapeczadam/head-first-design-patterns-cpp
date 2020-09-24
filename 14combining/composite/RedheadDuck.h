#pragma once

#include "IQuackable.h"

namespace combining::composite
{
    class RedheadDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
