#pragma once

#include "CeilingFan.h"
#include "ICommand.h"

#include <memory>

namespace command::party
{
    class CeilingFanMediumCommand : public ICommand
    {
        std::shared_ptr<CeilingFan> ceilingFan;

        unsigned char prevSpeed = CeilingFan::OFF;

    public:
        explicit CeilingFanMediumCommand(std::shared_ptr<CeilingFan> newCeilingFan);

        void execute() override;

        void undo() override;
    };
}
