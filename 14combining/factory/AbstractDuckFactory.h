#pragma once

#include "IQuackable.h"

#include <memory>

namespace combining::factory
{
    class AbstractDuckFactory
    {
    public:
        virtual ~AbstractDuckFactory() = 0;

        virtual std::shared_ptr<IQuackable> createMallardDuck() = 0;

        virtual std::shared_ptr<IQuackable> createRedheadDuck() = 0;

        virtual std::shared_ptr<IQuackable> createDuckCall() = 0;

        virtual std::shared_ptr<IQuackable> createRubberDuck() = 0;
    };
}
