#pragma once

#include "Amplifier.h"
#include "Tuner.h"
#include "StreamingPlayer.h"
#include "CDPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"

#include <memory>
#include <string>

namespace facade::hometheater
{
    class HomeTheaterFacade
    {
        std::shared_ptr<Amplifier> amp = nullptr;
        std::shared_ptr<Tuner> tuner = nullptr;
        std::shared_ptr<StreamingPlayer> player = nullptr;
        std::shared_ptr<CDPlayer> cd = nullptr;
        std::shared_ptr<Projector> projector = nullptr;
        std::shared_ptr<TheaterLights> lights = nullptr;
        std::shared_ptr<Screen> screen = nullptr;
        std::shared_ptr<PopcornPopper> popper = nullptr;

    public:
        HomeTheaterFacade(std::shared_ptr<Amplifier> newAmp,
                          std::shared_ptr<Tuner> newTuner,
                          std::shared_ptr<StreamingPlayer> newPlayer,
                          std::shared_ptr<CDPlayer> newCd,
                          std::shared_ptr<Projector> newProjector,
                          std::shared_ptr<Screen> newScreen,
                          std::shared_ptr<TheaterLights> newLights,
                          std::shared_ptr<PopcornPopper> newPopper);

        void watchMovie(const std::string& movie);

        void endMovie();

        void listenToRadio(double frequency);

        void endRadio();
    };
}


