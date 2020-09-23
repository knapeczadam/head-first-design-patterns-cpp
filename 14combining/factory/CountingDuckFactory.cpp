#include "CountingDuckFactory.h"

#include "DuckCall.h"
#include "MallardDuck.h"
#include "QuackCounter.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

namespace combining::factory
{
    std::shared_ptr<IQuackable> CountingDuckFactory::createMallardDuck()
    {
        return std::make_shared<QuackCounter>(std::make_shared<MallardDuck>());
    }

    std::shared_ptr<IQuackable> CountingDuckFactory::createRedheadDuck()
    {
        return std::make_shared<QuackCounter>(std::make_shared<RedheadDuck>());
    }

    std::shared_ptr<IQuackable> CountingDuckFactory::createDuckCall()
    {
        return std::make_shared<QuackCounter>(std::make_shared<DuckCall>());
    }

    std::shared_ptr<IQuackable> CountingDuckFactory::createRubberDuck()
    {
        return std::make_shared<QuackCounter>(std::make_shared<RubberDuck>());
    }
}
