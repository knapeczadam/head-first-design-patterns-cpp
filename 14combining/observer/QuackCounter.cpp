#include "QuackCounter.h"

#include <utility>

namespace combining::observer
{
    QuackCounter::QuackCounter(std::shared_ptr<IQuackable> newDuck) : duck{std::move(newDuck)}
    {

    }

    void QuackCounter::quack()
    {
        duck->quack();
        ++numberOfQuacks;
    }

    int QuackCounter::getQuacks()
    {
        return numberOfQuacks;
    }

    void QuackCounter::registerObserver(IObserver* observer)
    {
        duck->registerObserver(observer);
    }

    void QuackCounter::notifyObservers()
    {
        duck->notifyObservers();
    }

    void QuackCounter::toString(std::ostream& os) const
    {

    }

    int QuackCounter::numberOfQuacks = 0;
}
