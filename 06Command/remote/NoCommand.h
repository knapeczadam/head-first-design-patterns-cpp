#pragma once

#include "ICommand.h"

namespace command::remote
{
    class NoCommand : public ICommand
    {
    public:
        void execute() override;
    };
}
