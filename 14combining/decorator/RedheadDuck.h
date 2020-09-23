#pragma once

#include "IQuackable.h"

namespace combining::decorator
{
    class RedheadDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
