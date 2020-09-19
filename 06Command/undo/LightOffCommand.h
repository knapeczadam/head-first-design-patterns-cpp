#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::undo
{
    class LightOffCommand : public ICommand
    {
        std::shared_ptr<Light> light;

        unsigned int level = 0;

    public:
        explicit LightOffCommand(std::shared_ptr<Light> newLight);

        void execute() override;

        void undo() override;
    };
}
