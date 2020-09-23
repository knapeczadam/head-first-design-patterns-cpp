#pragma once

#include "IState.h"

#include <memory>
#include <ostream>

namespace state::gumballstate
{
    class GumballMachine
    {
        std::shared_ptr<IState> soldOutState = nullptr;

        std::shared_ptr<IState> noQuarterState = nullptr;

        std::shared_ptr<IState> hasQuarterState = nullptr;

        std::shared_ptr<IState> soldState = nullptr;

        std::shared_ptr<IState> state = nullptr;

        int count = 0;

    public:
        explicit GumballMachine(int numberGumballs);

        void insertQuarter();

        void ejectQuarter();

        void turnCrank();

        void releaseBall();

        int getCount() const;

        void refill(int count);

        void setState(const std::shared_ptr<IState>& newState);

        std::shared_ptr<IState> getState() const;

        std::shared_ptr<IState> getSoldOutState() const;

        std::shared_ptr<IState> getNoQuarterState() const;

        std::shared_ptr<IState> getHasQuarterState() const;

        std::shared_ptr<IState> getSoldState() const;

        friend std::ostream& operator<<(std::ostream& os, const GumballMachine& gumballMachine);
    };
}

