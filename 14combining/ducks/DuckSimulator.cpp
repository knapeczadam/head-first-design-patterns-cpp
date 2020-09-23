#include "DuckCall.h"
#include "IQuackable.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

#include <iostream>

using combining::ducks::DuckCall;
using combining::ducks::IQuackable;
using combining::ducks::MallardDuck;
using combining::ducks::RedheadDuck;
using combining::ducks::RubberDuck;

void simulate(IQuackable* duck)
{
    duck->quack();
}

int main()
{
    MallardDuck mallardDuck;
    RedheadDuck redheadDuck;
    DuckCall duckCall;
    RubberDuck rubberDuck;

    std::cout << "\nDuck Simulator" << '\n';

    simulate(&mallardDuck);
    simulate(&redheadDuck);
    simulate(&duckCall);
    simulate(&rubberDuck);
}
