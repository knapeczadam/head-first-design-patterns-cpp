#include "Flock.h"

namespace combining::observer
{
    void Flock::quack()
    {
        for (const auto& duck : ducks)
        {
            duck->quack();
        }
    }

    void Flock::add(const std::shared_ptr<IQuackable>& duck)
    {
        ducks.push_back(duck);
    }

    void Flock::registerObserver(IObserver* observer)
    {
        for (const auto& duck : ducks)
        {
            duck->registerObserver(observer);
        }
    }

    void Flock::notifyObservers()
    {

    }

    void Flock::toString(std::ostream& os) const
    {
        os << "Flock of Ducks";
    }
}
