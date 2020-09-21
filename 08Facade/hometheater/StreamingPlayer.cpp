#include "StreamingPlayer.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{
    StreamingPlayer::StreamingPlayer(std::string newDescription, std::shared_ptr<Amplifier> newAmplifier) : description{std::move(newDescription)}, amplifier{std::move(newAmplifier)}
    {

    }

    void StreamingPlayer::on()
    {
        std::cout << description << " on" << '\n';
    }

    void StreamingPlayer::off()
    {
        std::cout << description << " off" << '\n';
    }

    void StreamingPlayer::play(const std::string& newMovie)
    {
        movie = newMovie;
        currentChapter = 0;
        std::cout << description << " playing \"" << movie << "\"" << '\n';
    }

    void StreamingPlayer::play(unsigned int chapter)
    {
        if (movie.empty())
        {
            std::cout << description << " can't play chapter " << chapter << " no movie selected" << '\n';
        }
        else
        {
            currentChapter = chapter;
            std::cout << description << " playing chapter " << currentChapter << " of \"" << movie << "\"" << '\n';
        }
    }

    void StreamingPlayer::stop()
    {
        currentChapter = 0;
        std::cout << description << " stopped \"" << movie << "\"" << '\n';
    }

    void StreamingPlayer::pause()
    {
        std::cout << description << " paused \"" << movie << "\"" << '\n';
    }

    void StreamingPlayer::setTwoChannelAudio()
    {
        std::cout << description << " set two channel audio" << '\n';
    }

    void StreamingPlayer::setSurroundAudio()
    {
        std::cout << description << " set surround audio" << '\n';
    }

    std::ostream& operator<<(std::ostream& os, const StreamingPlayer& streamingPlayer)
    {
        os << streamingPlayer.description;
        return os;
    }
}
