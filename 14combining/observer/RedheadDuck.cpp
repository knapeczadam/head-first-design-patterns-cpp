#include "RedheadDuck.h"

#include <iostream>

namespace combining::observer
{
    RedheadDuck::RedheadDuck()
    {
        observable = std::make_shared<Observable>(this);
    }

    void RedheadDuck::quack()
    {
        std::cout << "Quack" << '\n';
        notifyObservers();
    }

    void RedheadDuck::registerObserver(IObserver* observer)
    {
        observable->registerObserver(observer);
    }

    void RedheadDuck::notifyObservers()
    {
        observable->notifyObservers();
    }

    void RedheadDuck::toString(std::ostream& os) const
    {
        os << "Redhead Duck";
    }
}
