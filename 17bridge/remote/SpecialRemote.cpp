#include "SpecialRemote.h"

#include <utility>

namespace bridge::remote
{
    SpecialRemote::SpecialRemote(std::shared_ptr<TVFactory> newTvFactory) : RemoteControl(std::move(newTvFactory))
    {

    }

    void SpecialRemote::up()
    {
        int channel = getChannel();
        setChannel(channel + 1);
    }

    void SpecialRemote::down()
    {
        int channel = getChannel();
        setChannel(channel - 1);
    }
}
