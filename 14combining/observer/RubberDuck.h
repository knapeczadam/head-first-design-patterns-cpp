#pragma once

#include "IQuackable.h"
#include "Observable.h"

#include <memory>

namespace combining::observer
{
    class RubberDuck : public IQuackable
    {
        std::shared_ptr<Observable> observable = nullptr;

    public:
        RubberDuck();

        void quack() override;

        void registerObserver(IObserver* observer) override;

        void notifyObservers() override;

        void toString(std::ostream& os) const override;
    };
}
