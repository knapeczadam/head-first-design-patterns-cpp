#pragma once

#include "IQuackable.h"

namespace combining::composite
{
    class DuckCall : public IQuackable
    {
    public:
        void quack() override;
    };
}
