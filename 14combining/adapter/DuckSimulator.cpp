#include "DuckCall.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "IQuackable.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

#include <iostream>
#include <memory>

using combining::adapter::DuckCall;
using combining::adapter::Goose;
using combining::adapter::GooseAdapter;
using combining::adapter::IQuackable;
using combining::adapter::MallardDuck;
using combining::adapter::RedheadDuck;
using combining::adapter::RubberDuck;

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
    GooseAdapter gooseDuck{std::make_shared<Goose>()};

    std::cout << "\nDuck Simulator: With Goose Adapter" << '\n';

    simulate(&mallardDuck);
    simulate(&redheadDuck);
    simulate(&duckCall);
    simulate(&rubberDuck);
    simulate(&gooseDuck);
}
