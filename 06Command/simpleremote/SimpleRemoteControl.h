#pragma once

#include "ICommand.h"

#include <memory>

namespace command::simpleremote
{
    class SimpleRemoteControl
    {
        std::shared_ptr<ICommand> slot = nullptr;

    public:
        void setCommand(const std::shared_ptr<ICommand>& newCommand);

        void buttonWasPressed();
    };
}
