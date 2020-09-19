#include "SimpleRemoteControl.h"

namespace command::simpleremote
{
    void SimpleRemoteControl::setCommand(const std::shared_ptr<ICommand>& newCommand)
    {
        slot = newCommand;
    }

    void SimpleRemoteControl::buttonWasPressed()
    {
        slot->execute();
    }
}
