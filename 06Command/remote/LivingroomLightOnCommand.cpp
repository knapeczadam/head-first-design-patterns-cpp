#include "LivingroomLightOnCommand.h"

#include <utility>

namespace command::remote
{
    LivingroomLightOnCommand::LivingroomLightOnCommand(std::shared_ptr<Light> newLight) : light{std::move(newLight)}
    {

    }

    void LivingroomLightOnCommand::execute()
    {
        light->on();
    }
}
