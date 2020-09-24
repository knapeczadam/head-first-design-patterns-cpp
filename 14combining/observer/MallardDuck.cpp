#include "MallardDuck.h"

#include <iostream>

namespace combining::observer
{
    MallardDuck::MallardDuck()
    {
        observable = std::make_shared<Observable>(this);
    }

    void MallardDuck::quack()
    {
        std::cout << "Quack" << '\n';
        notifyObservers();
    }

    void MallardDuck::registerObserver(IObserver* observer)
    {
        observable->registerObserver(observer);
    }

    void MallardDuck::notifyObservers()
    {
        observable->notifyObservers();
    }

    void MallardDuck::toString(std::ostream& os) const
    {
        os << "Mallard Duck";
    }
}
