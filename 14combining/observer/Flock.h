#pragma once

#include "IQuackable.h"

#include <memory>
#include <vector>

namespace combining::observer
{
    class Flock : public IQuackable
    {
        std::vector<std::shared_ptr<IQuackable>> ducks;

    public:
        void quack() override;

        void add(const std::shared_ptr<IQuackable>& duck);

        void registerObserver(IObserver* observer) override;

        void notifyObservers() override;

        void toString(std::ostream& os) const override;
    };
}
