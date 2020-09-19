#pragma once

#include "CeilingFan.h"
#include "ICommand.h"

#include <memory>

namespace command::remote
{
    class CeilingFanOnCommand : public ICommand
    {
        std::shared_ptr<CeilingFan> ceilingFan;

    public:
        explicit CeilingFanOnCommand(std::shared_ptr<CeilingFan> newCeilingFan);

        void execute() override;
    };
}
