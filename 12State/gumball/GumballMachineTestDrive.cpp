#include "GumballMachine.h"

#include <iostream>

using state::gumball::GumballMachine;

int main()
{
    GumballMachine gumballMachine{5};

    std::cout << gumballMachine;

    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();

    std::cout << gumballMachine;

    gumballMachine.insertQuarter();
    gumballMachine.ejectQuarter();
    gumballMachine.turnCrank();

    std::cout << gumballMachine;

    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();
    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();
    gumballMachine.ejectQuarter();

    std::cout << gumballMachine;

    gumballMachine.insertQuarter();
    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();
    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();
    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();

    std::cout << gumballMachine;
}
