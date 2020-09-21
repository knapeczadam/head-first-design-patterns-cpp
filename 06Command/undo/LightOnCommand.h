#pragma once

#include "ICommand.h"
#include "Light.h"

#include <memory>

namespace command::undo
{
    class LightOnCommand : public ICommand
    {
        std::shared_ptr<Light> light = nullptr;

        unsigned int level = 0;

    public:
        explicit LightOnCommand(std::shared_ptr<Light> newLight);

        void execute() override;

        void undo() override;
    };
}
