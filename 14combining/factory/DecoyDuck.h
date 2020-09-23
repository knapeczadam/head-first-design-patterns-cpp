#pragma once

#include "IQuackable.h"

namespace combining::factory
{
    class DecoyDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
