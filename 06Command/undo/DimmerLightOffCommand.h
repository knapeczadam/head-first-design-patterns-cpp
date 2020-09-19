#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::undo
{
    class DimmerLightOffCommand : public ICommand
    {
        std::shared_ptr<Light> light;

        unsigned int prevLevel = 0;

    public:
        explicit DimmerLightOffCommand(std::shared_ptr<Light> newLight);

        void execute() override;

        void undo() override;
    };
}
