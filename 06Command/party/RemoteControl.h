#pragma once

#include "ICommand.h"

#include <array>
#include <memory>
#include <ostream>

namespace command::party
{
    class RemoteControl
    {
        std::array<std::shared_ptr<ICommand>, 7> onCommands;

        std::array<std::shared_ptr<ICommand>, 7> offCommands;

        std::shared_ptr<ICommand> undoCommand = nullptr;

    public:
        RemoteControl();

        void setCommand(unsigned char slot, const std::shared_ptr<ICommand>& onCommand, const std::shared_ptr<ICommand>& offCommand);

        void onButtonWasPushed(unsigned char slot);

        void offButtonWasPush(unsigned char slot);

        void undoButtonWasPushed();

        friend std::ostream& operator<<(std::ostream& os, const RemoteControl& remoteControl);
    };
}
