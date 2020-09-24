#pragma once

#include "IQuackable.h"

namespace combining::composite
{
    class DecoyDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
