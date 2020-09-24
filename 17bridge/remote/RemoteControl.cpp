#include "RemoteControl.h"

#include <iostream>
#include <stdexcept>
#include <utility>

namespace bridge::remote
{
    RemoteControl::RemoteControl(std::shared_ptr<TVFactory> newTVFactory) : tvFactory{std::move(newTVFactory)}
    {

    }

    void RemoteControl::on()
    {
        tv->on();
    }

    void RemoteControl::off()
    {
        tv->off();
    }

    void RemoteControl::setChannel(int channel)
    {
        tv->tuneChannel(channel);
    }

    int RemoteControl::getChannel() const
    {
        return tv->getChannel();
    }

    void RemoteControl::setTV(const std::string& type)
    {
        try
        {
            tv = tvFactory->getTV(type);
        }
        catch (const std::invalid_argument& ia)
        {
            std::cerr << ia.what();
        }
    }

    RemoteControl::~RemoteControl()
    {

    }
}
