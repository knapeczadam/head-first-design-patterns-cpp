#pragma once

#include "TV.h"

namespace bridge::remote
{
    class LG : public TV
    {
        int channel = 1;

    public:
        void on() override;

        void off() override;

        void tuneChannel(int newChannel) override;

        int getChannel() const override;
    };
}
