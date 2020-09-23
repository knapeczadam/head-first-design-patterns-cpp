#pragma once

#include "Goose.h"
#include "IQuackable.h"

#include <memory>
#include <ostream>

namespace combining::decorator
{
    class GooseAdapter : public IQuackable
    {
        std::shared_ptr<Goose> goose;

    public:
        explicit GooseAdapter(std::shared_ptr<Goose> newGoose);

        void quack() override;

        friend std::ostream& operator<<(std::ostream& os, const GooseAdapter& gooseAdapter);
    };
}
