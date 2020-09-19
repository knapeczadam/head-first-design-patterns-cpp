#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::party
{
    class LightOnCommand : public ICommand
    {
        std::shared_ptr<Light> light;

    public:
        explicit LightOnCommand(std::shared_ptr<Light> newLight);

        void execute() override;

        void undo() override;
    };
}
