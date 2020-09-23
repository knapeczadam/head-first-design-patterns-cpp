#include "HasQuarterState.h"

#include <iostream>
#include <utility>

namespace state::gumballstate
{
    HasQuarterState::HasQuarterState(GumballMachine* newGumballMachine) : gumballMachine{newGumballMachine}
    {

    }

    void HasQuarterState::insertQuarter()
    {
        std::cout << "You can't insert another quarter" << '\n';
    }

    void HasQuarterState::ejectQuarter()
    {
        std::cout << "Quarter returned" << '\n';
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }

    void HasQuarterState::turnCrank()
    {
        std::cout << "You turned..." << '\n';
        gumballMachine->setState(gumballMachine->getSoldState());
    }

    void HasQuarterState::dispense()
    {
        std::cout << "No gumball dispensed" << '\n';
    }

    void HasQuarterState::refill()
    {

    }

    void HasQuarterState::toString(std::ostream& os) const
    {
        os << "waiting for turn of crank";
    }
}
