#include "Amplifier.h"
#include "StreamingPlayer.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{
    Amplifier::Amplifier(std::string newDescription) : description{std::move(newDescription)}
    {

    }

    void Amplifier::on()
    {
        std::cout << description << " on" << '\n';
    }

    void Amplifier::off()
    {
        std::cout << description << " off" << '\n';
    }

    void Amplifier::setStereoSound()
    {
        std::cout << description << " stereo mode on" << '\n';
    }

    void Amplifier::setSurroundSound()
    {
        std::cout << description << " surround sound on (5 speakers, 1 subwoofer)" << '\n';
    }

    void Amplifier::setVolume(int level)
    {
        std::cout << description << " setting volume to " << level << '\n';
    }

    void Amplifier::setTuner(const std::shared_ptr<Tuner>& newTuner)
    {
        tuner = newTuner;
        std::cout << description << " setting tuner to " << *player << '\n';
    }

    void Amplifier::setStreamingPlayer(const std::shared_ptr<StreamingPlayer>& newPlayer)
    {
        player = newPlayer;
        std::cout << description << " setting Streaming player to " << *player << '\n';
    }

    std::ostream& operator<<(std::ostream& os, const Amplifier& amplifier)
    {
        os << amplifier.description;
        return os;
    }
}
