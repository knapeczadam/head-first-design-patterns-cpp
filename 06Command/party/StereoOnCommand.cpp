#include "StereoOnCommand.h"

#include <utility>

namespace command::party
{
    StereoOnCommand::StereoOnCommand(std::shared_ptr<Stereo> newStereo) : stereo{std::move(newStereo)}
    {

    }

    void StereoOnCommand::execute()
    {
        stereo->on();
    }

    void StereoOnCommand::undo()
    {
        stereo->off();
    }
}
