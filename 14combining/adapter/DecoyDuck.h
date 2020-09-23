#pragma once

#include "IQuackable.h"

namespace combining::adapter
{
    class DecoyDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
