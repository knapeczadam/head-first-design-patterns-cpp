#include "DimmerLightOffCommand.h"

#include <utility>

namespace command::undo
{
    DimmerLightOffCommand::DimmerLightOffCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}, prevLevel{100}
    {

    }

    void DimmerLightOffCommand::execute()
    {
        prevLevel = light->getLevel();
        light->off();
    }

    void DimmerLightOffCommand::undo()
    {
        light->dim(prevLevel);
    }
}
