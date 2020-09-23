#include "DuckFactory.h"

#include "DuckCall.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

namespace combining::factory
{

    std::shared_ptr<IQuackable> DuckFactory::createMallardDuck()
    {
        return std::make_shared<MallardDuck>();
    }

    std::shared_ptr<IQuackable> DuckFactory::createRedheadDuck()
    {
        return std::make_shared<RedheadDuck>();
    }

    std::shared_ptr<IQuackable> DuckFactory::createDuckCall()
    {
        return std::make_shared<DuckCall>();
    }

    std::shared_ptr<IQuackable> DuckFactory::createRubberDuck()
    {
        return std::make_shared<RubberDuck>();
    }
}
