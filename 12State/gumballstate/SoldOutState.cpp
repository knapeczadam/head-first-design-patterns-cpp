#include "SoldOutState.h"

#include <iostream>
#include <utility>

namespace state::gumballstate
{
    SoldOutState::SoldOutState(GumballMachine* newGumballMachine) : gumballMachine{newGumballMachine}
    {

    }

    void SoldOutState::insertQuarter()
    {
        std::cout << "You can't insert a quarter, the machine is sold out" << '\n';
    }

    void SoldOutState::ejectQuarter()
    {
        std::cout << "You can't eject, you haven't inserted a quarter yet" << '\n';
    }

    void SoldOutState::turnCrank()
    {
        std::cout << "You turned, but there are no gumballs" << '\n';
    }

    void SoldOutState::dispense()
    {
        std::cout << "No gumball dispensed" << '\n';
    }

    void SoldOutState::refill()
    {
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }

    void SoldOutState::toString(std::ostream& os) const
    {
        os << "Sold out";
    }
}
