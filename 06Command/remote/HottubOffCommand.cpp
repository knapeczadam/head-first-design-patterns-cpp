#include "HottubOffCommand.h"

#include <utility>

namespace command::remote
{
    void HottubOffCommand::execute()
    {
        hottub->cool();
        hottub->off();
    }

    HottubOffCommand::HottubOffCommand(std::shared_ptr<Hottub> newHottub) : hottub{std::move(newHottub)}
    {

    }
}
