#pragma once

#include "ITurkey.h"

namespace adapter::ducks
{
    class WildTurkey : public ITurkey
    {
    public:
        void gobble() override;

        void fly() override;
    };
}
