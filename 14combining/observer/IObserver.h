#pragma once

#include <ostream>

namespace combining::observer
{
    class IQuackObservable;

    class IObserver
    {
    public:
        virtual ~IObserver() = default;

        virtual void update(IQuackObservable* duck) = 0;
    };
}
