#pragma once

#include "TV.h"
#include "TVFactory.h"

#include <memory>
#include <string>

namespace bridge::remote
{
    class RemoteControl
    {
        std::shared_ptr<TV> tv = nullptr;

        std::shared_ptr<TVFactory> tvFactory = nullptr;

    public:
        explicit RemoteControl(std::shared_ptr<TVFactory> newTVFactory);

        void on();

        void off();

        void setChannel(int channel);

        int getChannel() const;

        void setTV(const std::string& type);

        virtual ~RemoteControl() = 0;
    };
}
