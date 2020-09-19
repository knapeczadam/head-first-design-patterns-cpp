#include "CeilingFanHighCommand.h"

#include <utility>

namespace command::party
{
    CeilingFanHighCommand::CeilingFanHighCommand(std::shared_ptr<CeilingFan> newCeilingFan) : ceilingFan{std::move(newCeilingFan)}
    {

    }

    void CeilingFanHighCommand::execute()
    {
        prevSpeed = ceilingFan->getSpeed();
        ceilingFan->high();
    }

    void CeilingFanHighCommand::undo()
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
