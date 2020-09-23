#pragma once

#include "IQuackable.h"

#include <memory>

namespace combining::factory
{
    class QuackCounter : public IQuackable
    {
        std::shared_ptr<IQuackable> duck = nullptr;

        static  int numberOfQuacks;

    public:
        explicit QuackCounter(std::shared_ptr<IQuackable> newDuck);

        void quack() override;

        static int getQuacks();
    };
}
