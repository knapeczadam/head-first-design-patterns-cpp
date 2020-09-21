#pragma once

#include <memory>
#include <ostream>
#include <string>

namespace facade::hometheater
{
    class StreamingPlayer;

    class Tuner;

    class Amplifier
    {
        std::string description;

        std::shared_ptr<Tuner> tuner = nullptr;

        std::shared_ptr<StreamingPlayer> player = nullptr;

    public:
        explicit Amplifier(std::string newDescription);

        void on();

        void off();

        void setStereoSound();

        void setSurroundSound();

        void setVolume(int level);

        void setTuner(const std::shared_ptr<Tuner>& newTuner);

        void setStreamingPlayer(const std::shared_ptr<StreamingPlayer>& newPlayer);

        friend std::ostream& operator<<(std::ostream& os, const Amplifier& amplifier);
    };
}
