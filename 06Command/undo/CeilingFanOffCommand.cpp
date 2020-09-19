#include "CeilingFanOffCommand.h"

#include <utility>

namespace command::undo
{
    CeilingFanOffCommand::CeilingFanOffCommand(std::shared_ptr<CeilingFan> newCeilingFan) : ceilingFan{std::move(newCeilingFan)}
    {

    }

    void CeilingFanOffCommand::execute()
    {
        prevSpeed = ceilingFan->getSpeed();
        ceilingFan->off();
    }

    void CeilingFanOffCommand::undo()
    {
        if (prevSpeed == CeilingFan::HIGH)
        {
            ceilingFan->high();
        }
        else if (prevSpeed == CeilingFan::MEDIUM)
        {
            ceilingFan->medium();
        }
        else if (prevSpeed == CeilingFan::LOW)
        {
            ceilingFan->low();
        }
        else if (prevSpeed == CeilingFan::OFF)
        {
            ceilingFan->off();
        }
    }
}
