#include "HottubOffCommand.h"

#include <utility>

namespace command::party
{
    void HottubOffCommand::execute()
    {
        hottub->setTemperature(98);
        hottub->off();
    }

    void HottubOffCommand::undo()
    {
        hottub->on();
    }

    HottubOffCommand::HottubOffCommand(std::shared_ptr<Hottub> newHottub) : hottub{std::move(newHottub)}
    {

    }
}
