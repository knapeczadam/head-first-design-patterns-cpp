#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::simpleremote
{
    class LightOffCommand : public ICommand
    {
        std::shared_ptr<Light> light;

    public:
        explicit LightOffCommand(std::shared_ptr<Light> newLight);

        void execute() override;
    };
}
