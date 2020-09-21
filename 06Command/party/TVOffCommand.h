#pragma once

#include "ICommand.h"
#include "TV.h"

#include <memory>

namespace command::party
{
    class TVOffCommand : public ICommand
    {
        std::shared_ptr<TV> tv = nullptr;

    public:
        explicit TVOffCommand(std::shared_ptr<TV> newTv);

        void execute() override;

        void undo() override;
    };
}
