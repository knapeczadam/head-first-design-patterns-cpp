#include "GumballMachine.h"

#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include "WinnerState.h"

#include <iostream>

namespace state::gumballstatewinner
{
    GumballMachine::GumballMachine(int numberGumballs) : count{numberGumballs}
    {
        soldOutState = std::make_shared<SoldOutState>(this);
        noQuarterState = std::make_shared<NoQuarterState>(this);
        hasQuarterState = std::make_shared<HasQuarterState>(this);
        soldState = std::make_shared<SoldState>(this);
        winnerState = std::make_shared<WinnerState>(this);

        if (numberGumballs > 0)
        {
            state = noQuarterState;
        }
        else
        {
            state = soldOutState;
        }
    }

    void GumballMachine::insertQuarter()
    {
        state->insertQuarter();
    }

    void GumballMachine::ejectQuarter()
    {
        state->ejectQuarter();
    }

    void GumballMachine::turnCrank()
    {
        state->turnCrank();
        state->dispense();
    }

    void GumballMachine::releaseBall()
    {
        std::cout << "A gumball comes rolling out the slot..." << '\n';
        if (count > 0)
        {
            --count;
        }
    }

    int GumballMachine::getCount() const
    {
        return count;
    }

    void GumballMachine::refill(int newCount)
    {
        count += newCount;
        std::cout << "The gumball was just refilled; its new count is: " << count << '\n';
        state->refill();
    }

    void GumballMachine::setState(const std::shared_ptr<IState>& newState)
    {
        state = newState;
    }

    std::shared_ptr<IState> GumballMachine::getState() const
    {
        return state;
    }

    std::shared_ptr<IState> GumballMachine::getSoldOutState() const
    {
        return soldOutState;
    }

    std::shared_ptr<IState> GumballMachine::getNoQuarterState() const
    {
        return noQuarterState;
    }

    std::shared_ptr<IState> GumballMachine::getHasQuarterState() const
    {
        return hasQuarterState;
    }

    std::shared_ptr<IState> GumballMachine::getSoldState() const
    {
        return soldState;
    }

    std::shared_ptr<IState> GumballMachine::getWinnerState() const
    {
        return winnerState;
    }

    std::ostream& operator<<(std::ostream& os, const GumballMachine& gumballMachine)
    {
        os << "\nMighty Gumball, Inc.";
        os << "\nJava-enabled Standing Gumball Model #2004";
        os << "\nInventory: " << gumballMachine.count << " gumball";
        if (gumballMachine.count != 1)
        {
            os << "s";
        }
        os << '\n';
        os << "Machine is " << *gumballMachine.state << '\n';
        return os;
    }
}
