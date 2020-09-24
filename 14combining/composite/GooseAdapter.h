#pragma once

#include "Goose.h"
#include "IQuackable.h"

#include <memory>
#include <ostream>

namespace combining::composite
{
    class GooseAdapter : public IQuackable
    {
        std::shared_ptr<Goose> goose = nullptr;

    public:
        explicit GooseAdapter(std::shared_ptr<Goose> newGoose);

        void quack() override;

        friend std::ostream& operator<<(std::ostream& os, const GooseAdapter& gooseAdapter);
    };
}
