#pragma once

#include "Amplifier.h"

#include <memory>
#include <ostream>
#include <string>

namespace facade::hometheater
{
    class CDPlayer
    {
        std::string description;

        unsigned int currentTrack = 0;

        std::shared_ptr<Amplifier> amplifier = nullptr;

        std::string title;

    public:
        CDPlayer(std::string newDescription, std::shared_ptr<Amplifier> newAmplifier);

        void on();

        void off();

        void eject();

        void play(const std::string& newTitle);

        void play(unsigned int track);

        void stop();

        void pause();

        friend std::ostream& operator<<(std::ostream& os, const CDPlayer& player);
    };
}
