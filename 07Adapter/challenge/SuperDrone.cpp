#include "SuperDrone.h"

#include <iostream>

namespace adapter::challenge
{
    void SuperDrone::beep()
    {
        std::cout << "Beep beep beep" << '\n';
    }

    void SuperDrone::spin_rotors()
    {
        std::cout << "Rotors are spinning" << '\n';
    }

    void SuperDrone::take_off()
    {
        std::cout << "Taking off" << '\n';
    }
}
