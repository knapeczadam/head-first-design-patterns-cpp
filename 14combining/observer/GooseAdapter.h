#pragma once

#include "Goose.h"
#include "IQuackable.h"
#include "Observable.h"

#include <memory>
#include <ostream>

namespace combining::observer
{
    class GooseAdapter : public IQuackable
    {
        std::shared_ptr<Goose> goose = nullptr;

        std::shared_ptr<Observable> observable = nullptr;

    public:
        explicit GooseAdapter(std::shared_ptr<Goose> newGoose);

        void quack() override;

        void registerObserver(IObserver* observer) override;

        void notifyObservers() override;

        void toString(std::ostream& os) const override;
    };
}
