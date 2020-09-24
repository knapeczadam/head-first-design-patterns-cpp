#pragma once

#include "IQuackable.h"

#include <memory>
#include <vector>

namespace combining::composite
{
    class Flock : public IQuackable
    {
        std::vector<std::shared_ptr<IQuackable>> quackers;

    public:
        void quack() override;

        void add(const std::shared_ptr<IQuackable>& quacker);
    };
}
