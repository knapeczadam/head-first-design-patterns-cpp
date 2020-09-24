#include "GenericRemote.h"

#include <utility>

namespace bridge::remote
{
    GenericRemote::GenericRemote(std::shared_ptr<TVFactory> newTvFactory) : RemoteControl(std::move(newTvFactory))
    {

    }

    void GenericRemote::nextChannel()
    {
        int channel = getChannel();
        setChannel(channel + 1);
    }

    void GenericRemote::prevChannel()
    {
        int channel = getChannel();
        setChannel(channel - 1);
    }
}
