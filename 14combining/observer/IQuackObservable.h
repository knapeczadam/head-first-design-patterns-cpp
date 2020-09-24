#pragma once

#include "IObserver.h"

#include <ostream>

namespace combining::observer
{
    class IQuackObservable
    {
    public:
        virtual ~IQuackObservable() = default;

        virtual void registerObserver(IObserver* observer) = 0;

        virtual void notifyObservers() = 0;

        friend std::ostream& operator<<(std::ostream& os, const IQuackObservable& observable);

        virtual void toString(std::ostream& os) const = 0;
    };
}
