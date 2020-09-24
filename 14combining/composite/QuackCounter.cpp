#include "QuackCounter.h"

#include <utility>

namespace combining::composite
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

    int QuackCounter::numberOfQuacks = 0;
}
