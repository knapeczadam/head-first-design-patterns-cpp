#pragma once

#include "IQuackable.h"

namespace combining::ducks
{
    class DuckCall : public IQuackable
    {
    public:
        void quack() override;
    };
}
