#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::party
{
    class LivingroomLightOffCommand : public ICommand
    {
        std::shared_ptr<Light> light;

    public:
        explicit LivingroomLightOffCommand(std::shared_ptr<Light> newLight);

        void execute() override;

        void undo() override;
    };
}
