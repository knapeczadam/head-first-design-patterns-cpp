#pragma once

#include "IQuackObservable.h"

#include <memory>
#include <vector>

namespace combining::observer
{
    class Observable : public IQuackObservable
    {
        std::vector<IObserver*> observers;

        IQuackObservable* duck = nullptr;

    public:
        explicit Observable(IQuackObservable* newDuck);

        void registerObserver(IObserver* observer) override;

        void notifyObservers() override;

        std::vector<IObserver*> getObservers() const;

        void toString(std::ostream& os) const override;
    };
}
