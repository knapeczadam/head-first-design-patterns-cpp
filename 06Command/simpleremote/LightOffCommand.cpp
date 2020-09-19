#include "LightOffCommand.h"

#include <utility>

namespace command::simpleremote
{
    LightOffCommand::LightOffCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LightOffCommand::execute()
    {
        light->off();
    }
}
