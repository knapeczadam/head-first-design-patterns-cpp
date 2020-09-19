#pragma once

#include "CeilingFan.h"
#include "ICommand.h"

#include <memory>

namespace command::party
{
    class CeilingFanHighCommand : public ICommand
    {
        std::shared_ptr<CeilingFan> ceilingFan;

        unsigned char prevSpeed = CeilingFan::OFF;

    public:
        explicit CeilingFanHighCommand(std::shared_ptr<CeilingFan> newCeilingFan);

        void execute() override;

        void undo() override;
    };
}
