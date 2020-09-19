#include "GarageDoorDownCommand.h"

#include <utility>

namespace command::remote
{
    void GarageDoorDownCommand::execute()
    {
        garageDoor->down();
    }

    GarageDoorDownCommand::GarageDoorDownCommand(std::shared_ptr<GarageDoor> newGarageDoor) : garageDoor{std::move(newGarageDoor)}
    {

    }
}
