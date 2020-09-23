#include "DuckCall.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "IQuackable.h"
#include "MallardDuck.h"
#include "QuackCounter.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

#include <iostream>
#include <memory>

using combining::composite::DuckCall;
using combining::composite::Goose;
using combining::composite::GooseAdapter;
using combining::composite::IQuackable;
using combining::composite::MallardDuck;
using combining::composite::QuackCounter;
using combining::composite::RedheadDuck;
using combining::composite::RubberDuck;

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

    std::cout << "\nDuck Simulator: With Decorator" << '\n';

    simulate(&mallardDuck);
    simulate(&redheadDuck);
    simulate(&duckCall);
    simulate(&rubberDuck);
    simulate(&gooseDuck);

    std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << '\n';
}
