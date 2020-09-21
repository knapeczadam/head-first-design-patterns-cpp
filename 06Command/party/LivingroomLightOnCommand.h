#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::party
{
    class LivingroomLightOnCommand : public ICommand
    {
        std::shared_ptr<Light> light = nullptr;

    public:
        explicit LivingroomLightOnCommand(std::shared_ptr<Light> newLight);

        void execute() override;

        void undo() override;
    };
}
