#pragma once

#include "Hottub.h"
#include "ICommand.h"

#include <memory>

namespace command::party
{
    class HottubOffCommand : public ICommand
    {
        std::shared_ptr<Hottub> hottub;

    public:
        explicit HottubOffCommand(std::shared_ptr<Hottub> newHottub);

        void execute() override;

        void undo() override;
    };
}
