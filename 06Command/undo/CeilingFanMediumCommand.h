#pragma once

#include "CeilingFan.h"
#include "ICommand.h"

#include <memory>

namespace command::undo
{
    class CeilingFanMediumCommand : public ICommand
    {
        std::shared_ptr<CeilingFan> ceilingFan = nullptr;

        unsigned char prevSpeed = CeilingFan::OFF;

    public:
        explicit CeilingFanMediumCommand(std::shared_ptr<CeilingFan> newCeilingFan);

        void execute() override;

        void undo() override;
    };
}
