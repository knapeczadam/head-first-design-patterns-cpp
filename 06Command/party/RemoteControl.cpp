#include "RemoteControl.h"

#include "NoCommand.h"

namespace command::party
{
    RemoteControl::RemoteControl()
    {
        std::shared_ptr<ICommand> noCommand = std::make_shared<NoCommand>();
        for (int i = 0; i < 7; ++i)
        {
            onCommands[i] = noCommand;
            offCommands[i] = noCommand;
        }
        undoCommand = noCommand;
    }

    void RemoteControl::setCommand(unsigned char slot, const std::shared_ptr<ICommand>& onCommand, const std::shared_ptr<ICommand>& offCommand)
    {
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }

    void RemoteControl::onButtonWasPushed(unsigned char slot)
    {
        onCommands[slot]->execute();
        undoCommand = onCommands[slot];
    }

    void RemoteControl::offButtonWasPush(unsigned char slot)
    {
        offCommands[slot]->execute();
        undoCommand = offCommands[slot];
    }

    void RemoteControl::undoButtonWasPushed()
    {
        undoCommand->undo();
    }

    std::ostream& operator<<(std::ostream& os, const RemoteControl& remoteControl)
    {
        os << "\n------ Remote Control -------\n";
        for (int i = 0; i < remoteControl.onCommands.size(); ++i)
        {
            os << "[slot " << i << "] " << typeid(*remoteControl.onCommands[i]).name()
               << "    " << typeid(*remoteControl.offCommands[i]).name() << '\n';
        }
        os << "[undo] " << typeid(*remoteControl.undoCommand).name() << '\n';
        return os;
    }
}
