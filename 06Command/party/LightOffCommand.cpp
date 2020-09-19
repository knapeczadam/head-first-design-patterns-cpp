#include "LightOffCommand.h"

#include <utility>

namespace command::party
{
    LightOffCommand::LightOffCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LightOffCommand::execute()
    {
        light->off();
    }

    void LightOffCommand::undo()
    {
        light->on();
    }
}
