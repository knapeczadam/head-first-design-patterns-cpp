#include "HasQuarterState.h"

#include <iostream>
#include <random>
#include <utility>

namespace state::gumballstatewinner
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
        static std::random_device seed{};
        static std::mt19937 engine{seed()};
        static std::uniform_int_distribution<> dis{0, 9};
        int winner{dis(engine)};
        if (winner == 0 && gumballMachine->getCount() > 1)
        {
            gumballMachine->setState(gumballMachine->getWinnerState());
        }
        else
        {
            gumballMachine->setState(gumballMachine->getSoldState());
        }
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
