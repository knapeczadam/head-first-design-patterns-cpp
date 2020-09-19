#include "RemoteControlWithUndo.h"

#include "NoCommand.h"

namespace command::undo
{
    RemoteControlWithUndo::RemoteControlWithUndo()
    {
        std::shared_ptr<ICommand> noCommand = std::make_shared<NoCommand>();
        for (int i = 0; i < 7; ++i)
        {
            onCommands[i] = noCommand;
            offCommands[i] = noCommand;
        }
        undoCommand = noCommand;
    }

    void RemoteControlWithUndo::setCommand(unsigned char slot, const std::shared_ptr<ICommand>& onCommand, const std::shared_ptr<ICommand>& offCommand)
    {
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }

    void RemoteControlWithUndo::onButtonWasPushed(unsigned char slot)
    {
        onCommands[slot]->execute();
        undoCommand = onCommands[slot];
    }

    void RemoteControlWithUndo::offButtonWasPush(unsigned char slot)
    {
        offCommands[slot]->execute();
        undoCommand = offCommands[slot];
    }

    void RemoteControlWithUndo::undoButtonWasPushed()
    {
        undoCommand->undo();
    }

    std::ostream& operator<<(std::ostream& os, const RemoteControlWithUndo& remoteControl)
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
