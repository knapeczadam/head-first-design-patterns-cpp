#pragma once

#include "IQuackable.h"

namespace combining::factory
{
    class DuckCall : public IQuackable
    {
    public:
        void quack() override;
    };
}
