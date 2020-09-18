#pragma once

#include "IObserver.h"

#include <list>
#include <memory>

namespace observer
{
    class ISubject
    {
    private:
        std::list<IObserver*> observers;

    public:
        bool changed = false;

    public:
        void registerObserver(IObserver* observer);

        void removeObserver(IObserver* observer);

        void notifyObservers();

        void setChanged();

        virtual ~ISubject() = default;
    };
}
