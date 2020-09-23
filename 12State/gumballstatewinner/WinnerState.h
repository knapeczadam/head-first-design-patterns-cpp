#pragma once

#include "GumballMachine.h"
#include "IState.h"

#include <memory>
#include <ostream>

namespace state::gumballstatewinner
{
    class WinnerState : public IState
    {
        GumballMachine* gumballMachine = nullptr;
    public:
        explicit WinnerState(GumballMachine* newGumballMachine);

        void insertQuarter() override;

        void ejectQuarter() override;

        void turnCrank() override;

        void dispense() override;

        void refill() override;

        void toString(std::ostream& os) const override;
    };
}
