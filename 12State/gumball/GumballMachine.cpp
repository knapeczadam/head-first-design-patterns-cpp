#include "GumballMachine.h"

#include <iostream>

namespace state::gumball
{
    GumballMachine::GumballMachine(int newCount) : count{newCount}
    {
        if (count > 0)
        {
            state = NO_QUARTER;
        }
    }

    void GumballMachine::insertQuarter()
    {
        if (state == HAS_QUARTER)
        {
            std::cout << "You can't insert another quarter" << '\n';
        }
        else if (state == NO_QUARTER)
        {
            state = HAS_QUARTER;
            std::cout << "You inserted a quarter" << '\n';
        }
        else if (state == SOLD_OUT)
        {
            std::cout << "You can't insert a quarter, the machine is sold out" << '\n';
        }
        else if (state == SOLD)
        {
            std::cout << "Please wait, we're already giving you a gumball" << '\n';
        }
    }

    void GumballMachine::ejectQuarter()
    {
        if (state == HAS_QUARTER)
        {
            std::cout << "Quarter returned" << '\n';
            state = NO_QUARTER;
        }
        else if (state == NO_QUARTER)
        {
            std::cout << "You haven't inserted a quarter" << '\n';
        }
        else if (state == SOLD)
        {
            std::cout << "Sorry, you already turned the crank" << '\n';
        }
        else if (state == SOLD_OUT)
        {
            std::cout << "You can't eject, you haven't inserted a quarter yet" << '\n';
        }
    }

    void GumballMachine::turnCrank()
    {
        if (state == SOLD)
        {
            std::cout << "Turning twice doesn't get you another gumball!" << '\n';
        }
        else if (state == NO_QUARTER)
        {
            std::cout << "You turned but there's no quarter" << '\n';
        }
        else if (state == SOLD_OUT)
        {
            std::cout << "You turned, but there are no gumballs" << '\n';
        }
        else if (state == HAS_QUARTER)
        {
            std::cout << "You turned..." << '\n';
            state = SOLD;
            dispense();
        }
    }

    void GumballMachine::dispense()
    {
        if (state == SOLD)
        {
            std::cout << "A gumball comes rolling out the slot" << '\n';
            count = count - 1;
            if (count == 0)
            {
                std::cout << "Oops, out of gumballs!" << '\n';
                state = SOLD_OUT;
            }
            else
            {
                state = NO_QUARTER;
            }
        }
        else if (state == NO_QUARTER)
        {
            std::cout << "You need to pay first" << '\n';
        }
        else if (state == SOLD_OUT)
        {
            std::cout << "No gumball dispensed" << '\n';
        }
        else if (state == HAS_QUARTER)
        {
            std::cout << "No gumball dispensed" << '\n';
        }
    }

    void GumballMachine::refill(int numGumBalls)
    {
        count = numGumBalls;
        state = NO_QUARTER;
    }

    std::ostream& operator<<(std::ostream& os, const GumballMachine& gumballMachine)
    {
        os << "\nMighty Gumball, Inc.";
        os << "\nJava-enabled Standing Gumball Model #2004\n";
        os << "Inventory: " << gumballMachine.count << " gumball";
        if (gumballMachine.count != 1)
        {
            os << "s";
        }
        os << "\nMachine is ";
        if (gumballMachine.state == GumballMachine::SOLD_OUT)
        {
            os << "sold out";
        }
        else if (gumballMachine.state == GumballMachine::NO_QUARTER)
        {
            os << "waiting for quarter";
        }
        else if (gumballMachine.state == GumballMachine::HAS_QUARTER)
        {
            os << "waiting for turn of crank";
        }
        else if (gumballMachine.state == GumballMachine::SOLD)
        {
            os << "delivering a gumball";
        }
        os << '\n';
        return os;
    }
}
