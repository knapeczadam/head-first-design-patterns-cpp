#pragma once

namespace bridge::remote
{
    class TV
    {
    public:
        virtual void on() = 0;

        virtual void off() = 0;

        virtual void tuneChannel(int newChannel) = 0;

        virtual int getChannel() const = 0;

        virtual ~TV() = 0;
    };
}
