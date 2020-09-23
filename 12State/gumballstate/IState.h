#pragma once

#include <memory>
#include <ostream>

namespace state::gumballstate
{
    class GumballMachine;

    class IState
    {
    public:
        virtual ~IState() = default;

        virtual void insertQuarter() = 0;

        virtual void ejectQuarter() = 0;

        virtual void turnCrank() = 0;

        virtual void dispense() = 0;

        virtual void refill() = 0;

        virtual void toString(std::ostream& os) const = 0;

        friend std::ostream& operator<<(std::ostream& os, const IState& state);
    };
}
