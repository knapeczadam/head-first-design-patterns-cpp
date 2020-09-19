#include "StereoOffCommand.h"

#include <utility>

namespace command::remote
{
    StereoOffCommand::StereoOffCommand(std::shared_ptr<Stereo> newStereo) : stereo{std::move(newStereo)}
    {

    }

    void StereoOffCommand::execute()
    {
        stereo->off();
    }
}
