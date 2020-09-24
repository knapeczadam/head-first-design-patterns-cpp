#include "GenericRemote.h"
#include "SpecialRemote.h"
#include "TVFactory.h"

#include <iostream>
#include <memory>

using bridge::remote::GenericRemote;
using bridge::remote::SpecialRemote;
using bridge::remote::TVFactory;

int main()
{
    std::shared_ptr<TVFactory> tvFactory = std::make_shared<TVFactory>();
    SpecialRemote remoteSony{tvFactory};
    std::cout << "Connect your remote to the TV" << '\n';
    remoteSony.setTV("Sony");
    remoteSony.on();
    remoteSony.up();
    remoteSony.down();
    remoteSony.off();

    GenericRemote remoteLG{tvFactory};
    std::cout << "Connect your remote to the TV" << '\n';
    remoteLG.setTV("LG");
    remoteLG.on();
    remoteLG.nextChannel();
    remoteLG.prevChannel();
    remoteLG.off();
}
