#pragma once

#include "RemoteControl.h"

#include <memory>

namespace bridge::remote
{
    class GenericRemote : public RemoteControl
    {
    public:
        explicit GenericRemote(std::shared_ptr<TVFactory> newTvFactory);

        void nextChannel();

        void prevChannel();
    };
}
