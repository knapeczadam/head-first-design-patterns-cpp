#pragma once

#include "ICommand.h"

namespace command::undo
{
    class NoCommand : public ICommand
    {
    public:
        void execute() override;

        void undo() override;
    };
}
