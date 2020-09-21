#pragma once

#include "GarageDoor.h"
#include "ICommand.h"

#include <memory>

namespace command::remote
{
    class GarageDoorUpCommand : public ICommand
    {
        std::shared_ptr<GarageDoor> garageDoor = nullptr;

    public:
        explicit GarageDoorUpCommand(std::shared_ptr<GarageDoor> newGarageDoor);

        void execute() override;
    };
}
