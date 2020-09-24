#pragma once

#include "IQuackable.h"

#include <memory>

namespace combining::observer
{
    class QuackCounter : public IQuackable
    {
        std::shared_ptr<IQuackable> duck = nullptr;

        static  int numberOfQuacks;

    public:
        explicit QuackCounter(std::shared_ptr<IQuackable> newDuck);

        void quack() override;

        static int getQuacks();

        void registerObserver(IObserver* observer) override;

        void notifyObservers() override;

        void toString(std::ostream& os) const override;
    };
}
