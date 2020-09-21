#pragma once

#include "IDuck.h"
#include "ITurkey.h"

#include <memory>

namespace adapter::ducks
{
    class DuckAdapter : public ITurkey
    {
        std::shared_ptr<IDuck> duck = nullptr;

    public:
        explicit DuckAdapter(std::shared_ptr<IDuck> newDuck);

        void gobble() override;

        void fly() override;
    };
}
