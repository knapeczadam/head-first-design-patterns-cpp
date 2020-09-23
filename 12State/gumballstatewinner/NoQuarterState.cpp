#include "NoQuarterState.h"

#include <iostream>
#include <utility>

namespace state::gumballstatewinner
{
    NoQuarterState::NoQuarterState(GumballMachine* newGumballMachine) : gumballMachine{newGumballMachine}
    {

    }

    void NoQuarterState::insertQuarter()
    {
        std::cout << "You inserted a quarter" << '\n';
        gumballMachine->setState(gumballMachine->getHasQuarterState());
    }

    void NoQuarterState::ejectQuarter()
    {
        std::cout << "You haven't inserted a quarter" << '\n';
    }

    void NoQuarterState::turnCrank()
    {
        std::cout << "You turned, but there's no quarter" << '\n';
    }

    void NoQuarterState::dispense()
    {
        std::cout << "You need to pay first" << '\n';
    }

    void NoQuarterState::refill()
    {

    }

    void NoQuarterState::toString(std::ostream& os) const
    {
        os << "waiting for quarter";
    }
}
