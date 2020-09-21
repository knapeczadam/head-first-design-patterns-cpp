#include "Amplifier.h"
#include "Tuner.h"
#include "StreamingPlayer.h"
#include "CDPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"
#include "HomeTheaterFacade.h"

using facade::hometheater::Amplifier;
using facade::hometheater::Tuner;
using facade::hometheater::StreamingPlayer;
using facade::hometheater::CDPlayer;
using facade::hometheater::Projector;
using facade::hometheater::TheaterLights;
using facade::hometheater::Screen;
using facade::hometheater::PopcornPopper;
using facade::hometheater::HomeTheaterFacade;

#include <memory>

int main()
{
    std::shared_ptr<Amplifier> amp = std::make_shared<Amplifier>("Amplifier");
    std::shared_ptr<Tuner> tuner = std::make_shared<Tuner>("AM/FM Tuner", amp);
    std::shared_ptr<StreamingPlayer> player = std::make_shared<StreamingPlayer>("Streaming Player", amp);
    std::shared_ptr<CDPlayer> cd = std::make_shared<CDPlayer>("CD Player", amp);
    std::shared_ptr<Projector> projector = std::make_shared<Projector>("Projector", player);
    std::shared_ptr<TheaterLights> lights = std::make_shared<TheaterLights>("Theater Ceiling Lights");
    std::shared_ptr<Screen> screen = std::make_shared<Screen>("Theater Screen");
    std::shared_ptr<PopcornPopper> popper = std::make_shared<PopcornPopper>("Popcorn Popper");

    std::unique_ptr<HomeTheaterFacade> homeTheater = std::make_unique<HomeTheaterFacade>(amp, tuner, player, cd, projector, screen, lights, popper);
    homeTheater->watchMovie("Raiders of the Lost Ark");
    homeTheater->endMovie();
}
