#include "Observable.h"

#include <utility>

namespace combining::observer
{
    Observable::Observable(IQuackObservable* newDuck) : duck{newDuck}
    {

    }

    void Observable::registerObserver(IObserver* observer)
    {
        observers.push_back(observer);
    }

    void Observable::notifyObservers()
    {
        for (const auto& observer : observers)
        {
            observer->update(duck);
        }
    }

    std::vector<IObserver*> Observable::getObservers() const
    {
        return observers;
    }

    void Observable::toString(std::ostream& os) const
    {

    }
}
