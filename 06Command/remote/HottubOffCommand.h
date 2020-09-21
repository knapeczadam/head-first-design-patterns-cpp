#pragma once

#include "Hottub.h"
#include "ICommand.h"

#include <memory>

namespace command::remote
{
    class HottubOffCommand : public ICommand
    {
        std::shared_ptr<Hottub> hottub = nullptr;

    public:
        explicit HottubOffCommand(std::shared_ptr<Hottub> newHottub);

        void execute() override;
    };
}
