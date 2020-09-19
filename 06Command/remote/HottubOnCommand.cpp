#include "HottubOnCommand.h"

#include <utility>

namespace command::remote
{
    void HottubOnCommand::execute()
    {
        hottub->on();
        hottub->heat();
        hottub->bubblesOn();
    }

    HottubOnCommand::HottubOnCommand(std::shared_ptr<Hottub> newHottub) : hottub{std::move(newHottub)}
    {

    }
}
