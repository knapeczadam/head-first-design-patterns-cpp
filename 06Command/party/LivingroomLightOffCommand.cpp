#include "LivingroomLightOffCommand.h"

#include <utility>

namespace command::party
{
    LivingroomLightOffCommand::LivingroomLightOffCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LivingroomLightOffCommand::execute()
    {
        light->off();
    }

    void LivingroomLightOffCommand::undo()
    {
        light->on();
    }
}
