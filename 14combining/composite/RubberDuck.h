#pragma once

#include "IQuackable.h"

namespace combining::composite
{
    class RubberDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
