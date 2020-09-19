#include "CeilingFan.h"
#include "CeilingFanHighCommand.h"
#include "CeilingFanMediumCommand.h"
#include "CeilingFanOffCommand.h"
#include "Light.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "RemoteControlWithUndo.h"

#include <iostream>
#include <memory>

using command::undo::CeilingFan;
using command::undo::CeilingFanHighCommand;
using command::undo::CeilingFanMediumCommand;
using command::undo::CeilingFanOffCommand;
using command::undo::Light;
using command::undo::LightOffCommand;
using command::undo::LightOnCommand;
using command::undo::RemoteControlWithUndo;

int main()
{
    std::unique_ptr<RemoteControlWithUndo> remoteControl = std::make_unique<RemoteControlWithUndo>();

    std::shared_ptr<Light> livingRoomLight = std::make_shared<Light>("Living Room");
    std::shared_ptr<LightOnCommand> livingRoomLightOn = std::make_shared<LightOnCommand>(livingRoomLight);
    std::shared_ptr<LightOffCommand> livingRoomLightOff = std::make_shared<LightOffCommand>(livingRoomLight);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPush(0);
    std::cout << *remoteControl << '\n';
    remoteControl->undoButtonWasPushed();
    remoteControl->offButtonWasPush(0);
    remoteControl->onButtonWasPushed(0);
    std::cout << *remoteControl << '\n';
    remoteControl->undoButtonWasPushed();

    std::shared_ptr<CeilingFan> ceilingFan = std::make_shared<CeilingFan>("Living Room");
    std::shared_ptr<CeilingFanMediumCommand> ceilingFanMedium = std::make_shared<CeilingFanMediumCommand>(ceilingFan);
    std::shared_ptr<CeilingFanHighCommand> ceilingFanHigh = std::make_shared<CeilingFanHighCommand>(ceilingFan);
    std::shared_ptr<CeilingFanOffCommand> ceilingFanOff = std::make_shared<CeilingFanOffCommand>(ceilingFan);

    remoteControl->setCommand(0, ceilingFanMedium, ceilingFanOff);
    remoteControl->setCommand(1, ceilingFanHigh, ceilingFanOff);

    remoteControl->onButtonWasPushed(0);
    remoteControl->offButtonWasPush(0);
    std::cout << *remoteControl << '\n';
    remoteControl->undoButtonWasPushed();

    remoteControl->onButtonWasPushed(1);
    std::cout << *remoteControl << '\n';
    remoteControl->undoButtonWasPushed();
}
