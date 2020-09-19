#include "DimmerLightOnCommand.h"

#include <utility>

namespace command::undo
{
    DimmerLightOnCommand::DimmerLightOnCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void DimmerLightOnCommand::execute()
    {
        prevLevel = light->getLevel();
        light->dim(75);
    }

    void DimmerLightOnCommand::undo()
    {
        light->dim(prevLevel);
    }
}
