#pragma once

#include "IQuackable.h"

#include <memory>

namespace combining::decorator
{
    class QuackCounter : public IQuackable
    {
        std::shared_ptr<IQuackable> duck;

        static  int numberOfQuacks;

    public:
        explicit QuackCounter(std::shared_ptr<IQuackable> newDuck);

        void quack() override;

        static int getQuacks();
    };
}
