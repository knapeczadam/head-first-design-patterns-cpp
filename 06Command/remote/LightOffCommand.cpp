#include "LightOffCommand.h"

#include <utility>

namespace command::remote
{
    LightOffCommand::LightOffCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LightOffCommand::execute()
    {
        light->off();
    }
}
