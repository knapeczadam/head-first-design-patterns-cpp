#include "StereoOnWithCDCommand.h"

#include <utility>

namespace command::remote
{
    StereoOnWithCDCommand::StereoOnWithCDCommand(std::shared_ptr<Stereo> newStereo) : stereo{std::move(newStereo)}
    {

    }

    void StereoOnWithCDCommand::execute()
    {
        stereo->on();
        stereo->setCD();
        stereo->setVolume(11);
    }
}
