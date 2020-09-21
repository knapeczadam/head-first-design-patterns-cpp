#include "Projector.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{
    Projector::Projector(std::string newDescription, std::shared_ptr<StreamingPlayer> newPlayer) : description{std::move(newDescription)}, player{std::move(newPlayer)}
    {

    }

    void Projector::on()
    {
        std::cout << description << " on" << '\n';
    }

    void Projector::off()
    {
        std::cout << description << " off" << '\n';
    }

    void Projector::wideScreenMode()
    {
        std::cout << description << " in widescreen mode (16x9 aspect ratio)" << '\n';
    }

    void Projector::tvMode()
    {
        std::cout << description << " in tv mode (4x3 aspect ratio)" << '\n';
    }

    std::ostream& operator<<(std::ostream& os, const Projector& projector)
    {
        os << projector.description;
        return os;
    }
}
