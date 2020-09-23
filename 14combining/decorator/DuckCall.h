#pragma once

#include "IQuackable.h"

namespace combining::decorator
{
    class DuckCall : public IQuackable
    {
    public:
        void quack() override;
    };
}
