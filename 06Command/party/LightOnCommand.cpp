#include "LightOnCommand.h"

#include <utility>

namespace command::party
{
    LightOnCommand::LightOnCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LightOnCommand::execute()
    {
        light->on();
    }

    void LightOnCommand::undo()
    {
        light->off();
    }
}
