#pragma once

#include "ICommand.h"
#include "Stereo.h"

#include <memory>

namespace command::party
{
    class StereoOnWithCDCommand : public ICommand
    {
        std::shared_ptr<Stereo> stereo;

    public:
        explicit StereoOnWithCDCommand(std::shared_ptr<Stereo> newStereo);

        void execute() override;

        void undo() override;
    };
}
