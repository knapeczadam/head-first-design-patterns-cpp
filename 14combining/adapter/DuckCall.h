#pragma once

#include "IQuackable.h"

namespace combining::adapter
{
    class DuckCall : public IQuackable
    {
    public:
        void quack() override;
    };
}
