#include "DuckCall.h"

#include <iostream>

namespace combining::observer
{
    DuckCall::DuckCall()
    {
        observable = std::make_shared<Observable>(this);
    }

    void DuckCall::quack()
    {
        std::cout << "Kwak" << '\n';
        notifyObservers();
    }

    void DuckCall::registerObserver(IObserver* observer)
    {
        observable->registerObserver(observer);
    }

    void DuckCall::notifyObservers()
    {
        observable->notifyObservers();
    }

    void DuckCall::toString(std::ostream& os) const
    {
        os << "Duck Call";
    }
}
