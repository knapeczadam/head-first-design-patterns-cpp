#pragma once

#include "AbstractDuckFactory.h"

namespace combining::observer
{
    class CountingDuckFactory : public AbstractDuckFactory
    {
    public:
        std::shared_ptr<IQuackable> createMallardDuck() override;

        std::shared_ptr<IQuackable> createRedheadDuck() override;

        std::shared_ptr<IQuackable> createDuckCall() override;

        std::shared_ptr<IQuackable> createRubberDuck() override;
    };
}
