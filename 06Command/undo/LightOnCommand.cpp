#include "LightOnCommand.h"

#include <utility>

namespace command::undo
{
    LightOnCommand::LightOnCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LightOnCommand::execute()
    {
        level = light->getLevel();
        light->on();
    }

    void LightOnCommand::undo()
    {
        light->dim(level);
    }
}
