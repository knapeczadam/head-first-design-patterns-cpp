#pragma once

#include "ICommand.h"

#include <memory>
#include <vector>

namespace command::party
{
    class MacroCommand : public ICommand
    {
        std::vector<std::shared_ptr<ICommand>> commands;

    public:
        explicit MacroCommand(std::vector<std::shared_ptr<ICommand>> newCommands);

        void execute() override;

        void undo() override;
    };
}
