#pragma once

#include "TV.h"

namespace bridge::remote
{
    class Sony : public TV
    {
        int station = 0;

    public:
        void on() override;

        void off() override;

        void tuneChannel(int newChannel) override;

        int getChannel() const override;
    };
}
