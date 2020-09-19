#include "CeilingFanOffCommand.h"

#include <utility>

namespace command::remote
{
    CeilingFanOffCommand::CeilingFanOffCommand(std::shared_ptr<CeilingFan> newCeilingFan) : ceilingFan{std::move(newCeilingFan)}
    {

    }

    void CeilingFanOffCommand::execute()
    {
        ceilingFan->off();
    }
}
