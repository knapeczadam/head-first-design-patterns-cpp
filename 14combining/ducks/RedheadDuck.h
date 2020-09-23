#pragma once

#include "IQuackable.h"

namespace combining::ducks
{
    class RedheadDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
