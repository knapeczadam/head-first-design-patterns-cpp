#include "DroneAdapter.h"

#include <utility>

namespace adapter::challenge
{
    DroneAdapter::DroneAdapter(std::shared_ptr<IDrone> newDrone) : drone{std::move(newDrone)}
    {

    }

    void DroneAdapter::quack()
    {
        drone->beep();
    }

    void DroneAdapter::fly()
    {
        drone->spin_rotors();
        drone->take_off();
    }
}
