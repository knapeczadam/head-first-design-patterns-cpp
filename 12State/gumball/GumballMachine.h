#pragma once

#include <ostream>

namespace state::gumball
{
    class GumballMachine
    {
        static const int SOLD_OUT = 0;

        static const int NO_QUARTER = 1;

        static const int HAS_QUARTER = 2;

        static const int SOLD = 3;

        int state = SOLD_OUT;

        int count = 0;

    public:
        explicit GumballMachine(int newCount);

        void insertQuarter();

        void ejectQuarter();

        void turnCrank();

        void dispense();

        void refill(int numGumBalls);

        friend std::ostream& operator<<(std::ostream& os, const GumballMachine& gumballMachine);
    };
}
