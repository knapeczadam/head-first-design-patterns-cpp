#pragma once

#include "IQuackObservable.h"

namespace combining::observer
{
    class IQuackable : public IQuackObservable
    {
    public:
        virtual ~IQuackable() = default;

        virtual void quack() = 0;

        virtual void toString(std::ostream& os) const = 0;
    };
}
