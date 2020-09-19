#include "LightOnCommand.h"

#include <utility>

namespace command::simpleremote
{
    LightOnCommand::LightOnCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LightOnCommand::execute()
    {
        light->on();
    }
}
