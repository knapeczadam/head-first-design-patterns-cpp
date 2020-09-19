#include "LivingroomLightOffCommand.h"

#include <utility>

namespace command::remote
{
    LivingroomLightOffCommand::LivingroomLightOffCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LivingroomLightOffCommand::execute()
    {
        light->off();
    }
}
