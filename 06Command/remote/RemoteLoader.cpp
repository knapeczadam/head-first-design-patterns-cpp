#include "CeilingFan.h"
#include "CeilingFanOffCommand.h"
#include "CeilingFanOnCommand.h"
#include "GarageDoor.h"
#include "GarageDoorDownCommand.h"
#include "GarageDoorUpCommand.h"
#include "Light.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "RemoteControl.h"
#include "Stereo.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"

#include <iostream>
#include <memory>

using command::remote::CeilingFan;
using command::remote::CeilingFanOffCommand;
using command::remote::CeilingFanOnCommand;
using command::remote::GarageDoor;
using command::remote::GarageDoorDownCommand;
using command::remote::GarageDoorUpCommand;
using command::remote::Light;
using command::remote::LightOffCommand;
using command::remote::LightOnCommand;
using command::remote::RemoteControl;
using command::remote::Stereo;
using command::remote::StereoOffCommand;
using command::remote::StereoOnWithCDCommand;

int main()
{
    std::unique_ptr<RemoteControl> remoteControl = std::make_unique<RemoteControl>();

    std::shared_ptr<Light> livingRoomLight = std::make_shared<Light>("Living Room");
    std::shared_ptr<Light> kitchenLight = std::make_shared<Light>("Kitchen");
    std::shared_ptr<CeilingFan> ceilingFan = std::make_shared<CeilingFan>("Living Room");
    std::shared_ptr<GarageDoor> garageDoor = std::make_shared<GarageDoor>("Garage");
    std::shared_ptr<Stereo> stereo = std::make_shared<Stereo>("Living Room");

    std::shared_ptr<LightOnCommand> livingRoomLightOn = std::make_shared<LightOnCommand>(livingRoomLight);
    std::shared_ptr<LightOffCommand> livingRoomLightOff = std::make_shared<LightOffCommand>(livingRoomLight);
    std::shared_ptr<LightOnCommand> kitchenLightOn = std::make_shared<LightOnCommand>(kitchenLight);
    std::shared_ptr<LightOffCommand> kitchenLightOff = std::make_shared<LightOffCommand>(kitchenLight);

    std::shared_ptr<CeilingFanOnCommand> ceilingFanOn = std::make_shared<CeilingFanOnCommand>(ceilingFan);
    std::shared_ptr<CeilingFanOffCommand> ceilingFanOff = std::make_shared<CeilingFanOffCommand>(ceilingFan);

    std::shared_ptr<GarageDoorUpCommand> garageDoorUp = std::make_shared<GarageDoorUpCommand>(garageDoor);
    std::shared_ptr<GarageDoorDownCommand> garageDoorDown = std::make_shared<GarageDoorDownCommand>(garageDoor);

    std::shared_ptr<StereoOnWithCDCommand> stereoOnWithCD = std::make_shared<StereoOnWithCDCommand>(stereo);
    std::shared_ptr<StereoOffCommand> stereoOff = std::make_shared<StereoOffCommand>(stereo);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->setCommand(2, ceilingFanOn, ceilingFanOff);
    remoteControl->setCommand(3, stereoOnWithCD, stereoOff);

    std::cout << *remoteControl << '\n';

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPush(0);
    remoteControl->onButtonWasPushed(1);
    remoteControl->offButtonWasPush(1);
    remoteControl->onButtonWasPushed(2);
    remoteControl->offButtonWasPush(2);
    remoteControl->onButtonWasPushed(3);
    remoteControl->offButtonWasPush(3);
}
