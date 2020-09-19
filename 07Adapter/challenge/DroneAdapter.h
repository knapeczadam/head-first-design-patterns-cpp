#pragma once

#include "../ducks/IDuck.h"
#include "IDrone.h"

#include <memory>

namespace adapter::challenge
{
    class DroneAdapter : public ducks::IDuck
    {
        std::shared_ptr<IDrone> drone;

    public:
        explicit DroneAdapter(std::shared_ptr<IDrone> newDrone);

        void quack() override;

        void fly() override;
    };
}
