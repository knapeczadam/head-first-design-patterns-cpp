#pragma once

#include "ICommand.h"
#include "Stereo.h"

#include <memory>

namespace command::remote
{
    class StereoOffCommand : public ICommand
    {
        std::shared_ptr<Stereo> stereo;

    public:
        explicit StereoOffCommand(std::shared_ptr<Stereo> newStereo);

        void execute() override;
    };
}
