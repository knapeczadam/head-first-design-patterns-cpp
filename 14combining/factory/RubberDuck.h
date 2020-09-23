#pragma once

#include "IQuackable.h"

namespace combining::factory
{
    class RubberDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
