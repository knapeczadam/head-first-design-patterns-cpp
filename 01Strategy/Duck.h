#pragma once

#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

#include <memory>

namespace strategy
{
    class Duck
    {
    protected:
        std::shared_ptr<IFlyBehavior> flyBehavior = nullptr;

        std::shared_ptr<IQuackBehavior> quackBehavior = nullptr;

    public:
        void setFlyBehavior(const std::shared_ptr<IFlyBehavior>& newFlyBehavior);

        void setQuackBehavior(const std::shared_ptr<IQuackBehavior>& newQuackBehavior);

        virtual void display() const = 0;

        void performFly();

        void performQuack();

        void swim() const;

        virtual ~Duck() = default;
    };
}
