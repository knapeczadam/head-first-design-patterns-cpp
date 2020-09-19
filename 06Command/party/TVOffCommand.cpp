#include "TVOffCommand.h"

#include <utility>

namespace command::party
{
    TVOffCommand::TVOffCommand(std::shared_ptr<TV> newTv) : tv{std::move(newTv)}
    {

    }

    void TVOffCommand::execute()
    {
        tv->off();
    }

    void TVOffCommand::undo()
    {
        tv->on();
    }
}
