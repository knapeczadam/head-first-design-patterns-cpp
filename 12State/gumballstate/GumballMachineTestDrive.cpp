#include "GumballMachine.h"

#include <iostream>
#include <memory>

using state::gumballstate::GumballMachine;

int main()
{
    std::shared_ptr<GumballMachine> gumballMachine = std::make_shared<GumballMachine>(2);

    std::cout << *gumballMachine << '\n';

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine << '\n';

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    gumballMachine->refill(5);
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine;
}
