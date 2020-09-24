#include "DecoyDuck.h"

#include <iostream>

namespace combining::observer
{
    DecoyDuck::DecoyDuck()
    {
        observable = std::make_shared<Observable>(this);
    }

    void DecoyDuck::quack()
    {
        std::cout << "<< Silence >>" << '\n';
        notifyObservers();
    }

    void DecoyDuck::registerObserver(IObserver* observer)
    {
        observable->registerObserver(observer);
    }

    void DecoyDuck::notifyObservers()
    {
        observable->notifyObservers();
    }

    void DecoyDuck::toString(std::ostream& os) const
    {
        os << "Decoy Duck";
    }
}
