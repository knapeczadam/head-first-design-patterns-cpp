#pragma once

#include "CeilingFan.h"
#include "ICommand.h"

#include <memory>

namespace command::undo
{
    class CeilingFanLowCommand : public ICommand
    {
        std::shared_ptr<CeilingFan> ceilingFan = nullptr;

        unsigned char prevSpeed = CeilingFan::OFF;

    public:
        explicit CeilingFanLowCommand(std::shared_ptr<CeilingFan> newCeilingFan);

        void execute() override;

        void undo() override;
    };
}
