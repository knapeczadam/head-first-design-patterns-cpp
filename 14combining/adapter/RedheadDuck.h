#pragma once

#include "IQuackable.h"

namespace combining::adapter
{
    class RedheadDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
