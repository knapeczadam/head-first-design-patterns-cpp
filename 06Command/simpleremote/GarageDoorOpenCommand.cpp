#include "GarageDoorOpenCommand.h"

#include <utility>

namespace command::simpleremote
{
    void GarageDoorOpenCommand::execute()
    {
        garageDoor->up();
    }

    GarageDoorOpenCommand::GarageDoorOpenCommand(std::shared_ptr<GarageDoor> newGarageDoor) : garageDoor{std::move(newGarageDoor)}
    {

    }
}
