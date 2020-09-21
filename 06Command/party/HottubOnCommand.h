#pragma once

#include "Hottub.h"
#include "ICommand.h"

#include <memory>

namespace command::party
{
    class HottubOnCommand : public ICommand
    {
        std::shared_ptr<Hottub> hottub = nullptr;

    public:
        explicit HottubOnCommand(std::shared_ptr<Hottub> newHottub);

        void execute() override;

        void undo() override;
    };
}
