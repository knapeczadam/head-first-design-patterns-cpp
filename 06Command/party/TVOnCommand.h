#pragma once

#include "ICommand.h"
#include "TV.h"

#include <memory>

namespace command::party
{
    class TVOnCommand : public ICommand
    {
        std::shared_ptr<TV> tv = nullptr;

    public:
        explicit TVOnCommand(std::shared_ptr<TV> newTv);

        void execute() override;

        void undo() override;
    };
}
