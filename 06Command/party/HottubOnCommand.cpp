#include "HottubOnCommand.h"

#include <utility>

namespace command::party
{
    void HottubOnCommand::execute()
    {
        hottub->on();
        hottub->setTemperature(104);
        hottub->circulate();
    }

    void HottubOnCommand::undo()
    {
        hottub->off();
    }

    HottubOnCommand::HottubOnCommand(std::shared_ptr<Hottub> newHottub) : hottub{std::move(newHottub)}
    {

    }
}
