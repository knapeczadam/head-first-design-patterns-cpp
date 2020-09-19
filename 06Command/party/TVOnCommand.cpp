#include "TVOnCommand.h"

#include <utility>

namespace command::party
{
    TVOnCommand::TVOnCommand(std::shared_ptr<TV> newTv) : tv{std::move(newTv)}
    {

    }

    void TVOnCommand::execute()
    {
        tv->on();
        tv->setInputChannel();
    }

    void TVOnCommand::undo()
    {
        tv->off();
    }
}
