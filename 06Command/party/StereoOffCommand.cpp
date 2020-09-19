#include "StereoOffCommand.h"

#include <utility>

namespace command::party
{
    StereoOffCommand::StereoOffCommand(std::shared_ptr<Stereo> newStereo) : stereo{std::move(newStereo)}
    {

    }

    void StereoOffCommand::execute()
    {
        stereo->off();
    }

    void StereoOffCommand::undo()
    {
        stereo->on();
    }
}
