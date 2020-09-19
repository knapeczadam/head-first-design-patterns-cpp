#pragma once

#include "IDuck.h"
#include "ITurkey.h"

#include <memory>

namespace adapter::ducks
{
    class TurkeyAdapter : public IDuck
    {
        std::shared_ptr<ITurkey> turkey;

    public:
        explicit TurkeyAdapter(std::shared_ptr<ITurkey> newTurkey);

        void quack() override;

        void fly() override;
    };
}
