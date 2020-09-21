#pragma once

#include "StreamingPlayer.h"
#include "Tuner.h"

#include <memory>
#include <ostream>
#include <string>

namespace facade::hometheater
{
    class Projector
    {
        std::string description;

        std::shared_ptr<StreamingPlayer> player = nullptr;

    public:
        Projector(std::string newDescription, std::shared_ptr<StreamingPlayer> newPlayer);

        void on();

        void off();

        void wideScreenMode();

        void tvMode();

        friend std::ostream& operator<<(std::ostream& os, const Projector& projector);
    };
}
