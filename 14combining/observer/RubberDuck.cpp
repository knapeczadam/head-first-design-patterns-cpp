#include "RubberDuck.h"

#include <iostream>

namespace combining::observer
{
    RubberDuck::RubberDuck()
    {
        observable = std::make_shared<Observable>(this);
    }

    void RubberDuck::quack()
    {
        std::cout << "Squek" << '\n';
        notifyObservers();
    }

    void RubberDuck::registerObserver(IObserver* observer)
    {
        observable->registerObserver(observer);
    }

    void RubberDuck::notifyObservers()
    {
        observable->notifyObservers();
    }

    void RubberDuck::toString(std::ostream& os) const
    {
        os << "Rubber Duck";
    }
}
