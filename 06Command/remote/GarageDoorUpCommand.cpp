#include "GarageDoorUpCommand.h"

#include <utility>

namespace command::remote
{
    void GarageDoorUpCommand::execute()
    {
        garageDoor->up();
    }

    GarageDoorUpCommand::GarageDoorUpCommand(std::shared_ptr<GarageDoor> newGarageDoor) : garageDoor{std::move(newGarageDoor)}
    {

    }
}
