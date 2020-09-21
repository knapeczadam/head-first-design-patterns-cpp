#pragma once

#include "Amplifier.h"

#include <memory>
#include <ostream>
#include <string>

namespace facade::hometheater
{
    class StreamingPlayer
    {
        std::string description;

        unsigned int currentChapter = 0;

        std::shared_ptr<Amplifier> amplifier = nullptr;

        std::string movie;

    public:
        StreamingPlayer(std::string newDescription, std::shared_ptr<Amplifier> newAmplifier);

        void on();

        void off();

        void play(const std::string& newMovie);

        void play(unsigned int chapter);

        void stop();

        void pause();

        void setTwoChannelAudio();

        void setSurroundAudio();

        friend std::ostream& operator<<(std::ostream& os, const StreamingPlayer& streamingPlayer);
    };
}
