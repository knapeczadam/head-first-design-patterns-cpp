#include "DuckAdapter.h"

#include <random>
#include <utility>

namespace adapter::ducks
{
    DuckAdapter::DuckAdapter(std::shared_ptr<IDuck> newDuck) : duck{std::move(newDuck)}
    {

    }

    void DuckAdapter::gobble()
    {
        duck->quack();
    }

    void DuckAdapter::fly()
    {
        std::random_device seed{};
        std::mt19937 engine{seed()};
        std::uniform_int_distribution<> dis{0, 4};
        int x{dis(engine)};
        if (x == 0)
        {
            duck->fly();
        }
    }
}
