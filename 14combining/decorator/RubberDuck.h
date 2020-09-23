#pragma once

#include "IQuackable.h"

namespace combining::decorator
{
    class RubberDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
