#pragma once

#include "IObserver.h"
#include "IQuackObservable.h"

namespace combining::observer
{
    class Quackologist : public IObserver
    {
    public:
        void update(IQuackObservable* duck) override;
    };
}
