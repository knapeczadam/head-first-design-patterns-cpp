#pragma once

namespace adapter::challenge
{
    class IDrone
    {
    public:
        virtual ~IDrone() = default;

        virtual void beep() = 0;

        virtual void spin_rotors() = 0;

        virtual void take_off() = 0;
    };
}
