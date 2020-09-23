#pragma once

#include "IQuackable.h"

namespace combining::decorator
{
    class DecoyDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
