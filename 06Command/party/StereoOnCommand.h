#pragma once

#include "ICommand.h"
#include "Stereo.h"

#include <memory>

namespace command::party
{
    class StereoOnCommand : public ICommand
    {
        std::shared_ptr<Stereo> stereo;

    public:
        explicit StereoOnCommand(std::shared_ptr<Stereo> newStereo);

        void execute() override;

        void undo() override;
    };
}
