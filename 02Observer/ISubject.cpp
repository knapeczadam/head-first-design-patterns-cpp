#include "ISubject.h"

namespace observer
{
    void ISubject::registerObserver(IObserver* observer)
    {
        observers.push_back(observer);
    }

    void ISubject::removeObserver(IObserver* observer)
    {
        observers.remove(observer);
    }

    void ISubject::notifyObservers()
    {
        if (changed)
        {
            for (const auto& observer : observers)
            {
                observer->update(this);
            }
            changed = false;
        }
    }

    void ISubject::setChanged()
    {
        changed = true;
    }

    ISubject::~ISubject()
    {

    }
}
