#include "CountingDuckFactory.h"
#include "DuckCall.h"
#include "Flock.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "IQuackable.h"
#include "MallardDuck.h"
#include "QuackCounter.h"
#include "Quackologist.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

#include <iostream>
#include <memory>

using combining::observer::CountingDuckFactory;
using combining::observer::DuckCall;
using combining::observer::Flock;
using combining::observer::Goose;
using combining::observer::GooseAdapter;
using combining::observer::IQuackable;
using combining::observer::MallardDuck;
using combining::observer::QuackCounter;
using combining::observer::Quackologist;
using combining::observer::RedheadDuck;
using combining::observer::RubberDuck;

void simulate(IQuackable* duck)
{
    duck->quack();
}

int main()
{
    CountingDuckFactory duckFactory;
    std::shared_ptr<IQuackable> mallardDuck = duckFactory.createMallardDuck();
    std::shared_ptr<IQuackable> redheadDuck = duckFactory.createRedheadDuck();
    std::shared_ptr<IQuackable> duckCall = duckFactory.createDuckCall();
    std::shared_ptr<IQuackable> rubberDuck = duckFactory.createRubberDuck();
    std::shared_ptr<IQuackable> gooseDuck = std::make_shared<GooseAdapter>(std::make_shared<Goose>());

    Flock flockOfDucks;

    flockOfDucks.add(redheadDuck);
    flockOfDucks.add(duckCall);
    flockOfDucks.add(rubberDuck);
    flockOfDucks.add(gooseDuck);

    std::shared_ptr<Flock> flockOfMallards = std::make_shared<Flock>();

    std::shared_ptr<IQuackable> mallardOne = duckFactory.createMallardDuck();
    std::shared_ptr<IQuackable> mallardTwo = duckFactory.createMallardDuck();
    std::shared_ptr<IQuackable> mallardThree = duckFactory.createMallardDuck();
    std::shared_ptr<IQuackable> mallardFour = duckFactory.createMallardDuck();

    flockOfMallards->add(mallardOne);
    flockOfMallards->add(mallardTwo);
    flockOfMallards->add(mallardThree);
    flockOfMallards->add(mallardFour);

    flockOfDucks.add(flockOfMallards);

    std::cout << "\nDuck Simulator: With Observers" << '\n';

    std::shared_ptr<Quackologist> quackologist = std::make_shared<Quackologist>();
    flockOfDucks.registerObserver(quackologist.get());

    simulate(&flockOfDucks);

    std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << '\n';
}
