#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::remote
{
    class LivingroomLightOnCommand : public ICommand
    {
        std::shared_ptr<Light> light;

    public:
        explicit LivingroomLightOnCommand(std::shared_ptr<Light> newLight);

        void execute() override;
    };
}
