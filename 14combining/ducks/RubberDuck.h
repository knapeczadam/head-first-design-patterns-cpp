#pragma once

#include "IQuackable.h"

namespace combining::ducks
{
    class RubberDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
