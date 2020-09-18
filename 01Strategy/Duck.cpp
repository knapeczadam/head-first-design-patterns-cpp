#include "Duck.h"

#include <iostream>

namespace strategy
{
    void Duck::setFlyBehavior(const std::shared_ptr<IFlyBehavior>& newFlyBehavior)
    {
        flyBehavior = newFlyBehavior;
    }

    void Duck::setQuackBehavior(const std::shared_ptr<IQuackBehavior>& newQuackBehavior)
    {
        quackBehavior = newQuackBehavior;
    }

    void Duck::performFly()
    {
        flyBehavior->fly();
    }

    void Duck::performQuack()
    {
        quackBehavior->quack();
    }

    void Duck::swim() const
    {
        std::cout << "All ducks float, even decoys!" << '\n';
    }

    Duck::~Duck()
    {

    }
}
