#include "LivingroomLightOnCommand.h"

#include <utility>

namespace command::party
{
    LivingroomLightOnCommand::LivingroomLightOnCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LivingroomLightOnCommand::execute()
    {
        light->on();
    }

    void LivingroomLightOnCommand::undo()
    {
        light->off();
    }
}
