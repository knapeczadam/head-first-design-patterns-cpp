#include "CeilingFanOffCommand.h"

#include <utility>

namespace command::party
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
        switch (prevSpeed)
        {
            case CeilingFan::HIGH:
                ceilingFan->high();
                break;
            case CeilingFan::MEDIUM:
                ceilingFan->medium();
                break;
            case CeilingFan::LOW:
                ceilingFan->low();
                break;
            default:
                ceilingFan->off();
                break;
        }
    }
}
