#include "CDPlayer.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{
    CDPlayer::CDPlayer(std::string newDescription, std::shared_ptr<Amplifier> newAmplifier) : description{std::move(newDescription)}, amplifier{std::move(newAmplifier)}
    {

    }

    void CDPlayer::on()
    {
        std::cout << description << " on" << '\n';
    }

    void CDPlayer::off()
    {
        std::cout << description << " off" << '\n';
    }

    void CDPlayer::eject()
    {
        title.clear();
        std::cout << description << " eject" << '\n';
    }

    void CDPlayer::play(const std::string& newTitle)
    {
        title =  newTitle;
        currentTrack = 0;
        std::cout << description << " playing \"" + title + "\"" << '\n';
    }

    void CDPlayer::play(unsigned int track)
    {
        if (title.empty())
        {
            std::cout << description << " can't play track " << currentTrack << ", no cd inserted" << '\n';
        }
        else
        {
            currentTrack = track;
            std::cout << description << " playing track " << currentTrack;
        }
    }

    void CDPlayer::stop()
    {
        currentTrack = 0;
        std::cout << description << " stopped" << '\n';
    }

    void CDPlayer::pause()
    {
        std::cout << description << " paused \"" << title << "\"" << '\n';
    }

    std::ostream& operator<<(std::ostream& os, const CDPlayer& player)
    {
        os << player.description;
        return os;
    }
}
