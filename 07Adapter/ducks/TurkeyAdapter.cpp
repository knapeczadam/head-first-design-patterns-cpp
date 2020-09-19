#include "TurkeyAdapter.h"

#include <utility>

namespace adapter::ducks
{
    TurkeyAdapter::TurkeyAdapter(std::shared_ptr<ITurkey> newTurkey) : turkey{std::move(newTurkey)}
    {

    }

    void TurkeyAdapter::quack()
    {
        turkey->gobble();
    }

    void TurkeyAdapter::fly()
    {
        for (int i = 0; i < 5; ++i)
        {
            turkey->fly();
        }
    }
}
