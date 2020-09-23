#pragma once

#include "IQuackable.h"

namespace combining::adapter
{
    class RubberDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
