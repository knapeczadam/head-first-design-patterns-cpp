#include "LightOnCommand.h"

#include <utility>

namespace command::remote
{
    LightOnCommand::LightOnCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LightOnCommand::execute()
    {
        light->on();
    }
}
