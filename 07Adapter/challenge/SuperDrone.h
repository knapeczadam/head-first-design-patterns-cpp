#pragma once

#include "IDrone.h"

namespace adapter::challenge
{
    class SuperDrone : public IDrone
    {
    public:
        void beep() override;

        void spin_rotors() override;

        void take_off() override;
    };
}
