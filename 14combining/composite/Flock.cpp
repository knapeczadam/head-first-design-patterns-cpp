#include "Flock.h"

namespace combining::composite
{
    void Flock::quack()
    {
        for (const auto& quacker : quackers)
        {
            quacker->quack();
        }
    }

    void Flock::add(const std::shared_ptr<IQuackable>& quacker)
    {
        quackers.push_back(quacker);
    }
}
