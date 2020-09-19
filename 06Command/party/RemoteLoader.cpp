#include "Hottub.h"
#include "HottubOffCommand.h"
#include "HottubOnCommand.h"
#include "ICommand.h"
#include "Light.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "MacroCommand.h"
#include "RemoteControl.h"
#include "Stereo.h"
#include "StereoOffCommand.h"
#include "StereoOnCommand.h"
#include "TV.h"
#include "TVOffCommand.h"
#include "TVOnCommand.h"

#include <iostream>
#include <memory>
#include <vector>

using command::party::Hottub;
using command::party::HottubOffCommand;
using command::party::HottubOnCommand;
using command::party::ICommand;
using command::party::Light;
using command::party::LightOffCommand;
using command::party::LightOnCommand;
using command::party::MacroCommand;
using command::party::RemoteControl;
using command::party::Stereo;
using command::party::StereoOffCommand;
using command::party::StereoOnCommand;
using command::party::TV;
using command::party::TVOffCommand;
using command::party::TVOnCommand;

int main()
{
    std::unique_ptr<RemoteControl> remoteControl = std::make_unique<RemoteControl>();

    std::shared_ptr<Light> light = std::make_shared<Light>("Living Room");
    std::shared_ptr<TV> tv = std::make_shared<TV>("Living Room");
    std::shared_ptr<Stereo> stereo = std::make_shared<Stereo>("Living Room");
    std::shared_ptr<Hottub> hottub = std::make_shared<Hottub>();

    std::shared_ptr<LightOnCommand> lightOn = std::make_shared<LightOnCommand>(light);
    std::shared_ptr<LightOffCommand> lightOff = std::make_shared<LightOffCommand>(light);
    std::shared_ptr<TVOnCommand> tvOn = std::make_shared<TVOnCommand>(tv);
    std::shared_ptr<TVOffCommand> tvOff = std::make_shared<TVOffCommand>(tv);
    std::shared_ptr<StereoOnCommand> stereoOn = std::make_shared<StereoOnCommand>(stereo);
    std::shared_ptr<StereoOffCommand> stereoOff = std::make_shared<StereoOffCommand>(stereo);
    std::shared_ptr<HottubOnCommand> hottubOn = std::make_shared<HottubOnCommand>(hottub);
    std::shared_ptr<HottubOffCommand> hottubOff = std::make_shared<HottubOffCommand>(hottub);

    std::vector<std::shared_ptr<ICommand>> partyOn;
    partyOn.reserve(4);
    partyOn.emplace_back(lightOn);
    partyOn.emplace_back(stereoOn);
    partyOn.emplace_back(tvOn);
    partyOn.emplace_back(hottubOn);

    std::vector<std::shared_ptr<ICommand>> partyOff;
    partyOff.reserve(4);
    partyOff.emplace_back(lightOff);
    partyOff.emplace_back(stereoOff);
    partyOff.emplace_back(tvOff);
    partyOff.emplace_back(hottubOff);

    std::shared_ptr<MacroCommand> partyOnMacro = std::make_shared<MacroCommand>(partyOn);
    std::shared_ptr<MacroCommand> partyOffMacro = std::make_shared<MacroCommand>(partyOff);

    remoteControl->setCommand(0, partyOnMacro, partyOffMacro);

    std::cout << *remoteControl << '\n';
    std::cout << "--- Pushing Macro On ---" << '\n';
    remoteControl->onButtonWasPushed(0);
    std::cout << "--- Pushing Macro Off ---" << '\n';
    remoteControl->offButtonWasPush(0);
}
