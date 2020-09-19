#include "GarageDoor.h"
#include "GarageDoorOpenCommand.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "SimpleRemoteControl.h"

#include <memory>

using command::simpleremote::GarageDoor;
using command::simpleremote::GarageDoorOpenCommand;
using command::simpleremote::Light;
using command::simpleremote::LightOnCommand;
using command::simpleremote::SimpleRemoteControl;

int main()
{
    std::unique_ptr<SimpleRemoteControl> remote = std::make_unique<SimpleRemoteControl>();
    std::shared_ptr<Light> light = std::make_shared<Light>();
    std::shared_ptr<GarageDoor> garageDoor = std::make_shared<GarageDoor>();
    std::shared_ptr<LightOnCommand> lightOn = std::make_shared<LightOnCommand>(light);
    std::shared_ptr<GarageDoorOpenCommand> garageOpen = std::make_shared<GarageDoorOpenCommand>(garageDoor);

    remote->setCommand(lightOn);
    remote->buttonWasPressed();
    remote->setCommand(garageOpen);
    remote->buttonWasPressed();
}
