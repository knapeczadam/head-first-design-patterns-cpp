#pragma once

#include "IQuackable.h"

namespace combining::factory
{
    class RedheadDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
