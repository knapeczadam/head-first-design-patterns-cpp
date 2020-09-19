#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::party
{
    class LightOffCommand : public ICommand
    {
        std::shared_ptr<Light> light;

    public:
        explicit LightOffCommand(std::shared_ptr<Light> newLight);

        void execute() override;

        void undo() override;
    };
}
