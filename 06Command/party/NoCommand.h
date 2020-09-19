#pragma once

#include "ICommand.h"

namespace command::party
{
    class NoCommand : public ICommand
    {
    public:
        void execute() override;

        void undo() override;
    };
}
