#include "LightOffCommand.h"

#include <utility>

namespace command::undo
{
    LightOffCommand::LightOffCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LightOffCommand::execute()
    {
        level = light->getLevel();
        light->off();
    }

    void LightOffCommand::undo()
    {
        light->dim(level);
    }
}
