#pragma once

#include "GarageDoor.h"
#include "ICommand.h"

#include <memory>

namespace command::simpleremote
{
    class GarageDoorOpenCommand : public ICommand
    {
        std::shared_ptr<GarageDoor> garageDoor;

    public:
        explicit GarageDoorOpenCommand(std::shared_ptr<GarageDoor> newGarageDoor);

        void execute() override;
    };
}
