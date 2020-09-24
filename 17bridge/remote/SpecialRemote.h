#pragma once

#include "RemoteControl.h"

#include <memory>

namespace bridge::remote
{
    class SpecialRemote : public RemoteControl
    {
    public:
        explicit SpecialRemote(std::shared_ptr<TVFactory> newTvFactory);

        void up();

        void down();
    };
}
