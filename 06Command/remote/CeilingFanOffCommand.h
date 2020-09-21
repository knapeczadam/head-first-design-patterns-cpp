#pragma once

#include "CeilingFan.h"
#include "ICommand.h"

#include <memory>

namespace command::remote
{
    class CeilingFanOffCommand : public ICommand
    {
        std::shared_ptr<CeilingFan> ceilingFan = nullptr;

    public:
        explicit CeilingFanOffCommand(std::shared_ptr<CeilingFan> newCeilingFan);

        void execute() override;
    };
}
