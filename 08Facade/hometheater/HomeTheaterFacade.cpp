#include "HomeTheaterFacade.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{

    HomeTheaterFacade::HomeTheaterFacade(std::shared_ptr<Amplifier> newAmp,
                                         std::shared_ptr<Tuner> newTuner,
                                         std::shared_ptr<StreamingPlayer> newPlayer,
                                         std::shared_ptr<CDPlayer> newCd,
                                         std::shared_ptr<Projector> newProjector,
                                         std::shared_ptr<Screen> newScreen,
                                         std::shared_ptr<TheaterLights> newLights,
                                         std::shared_ptr<PopcornPopper> newPopper)
                                         :
                                         amp{std::move(newAmp)},
                                         tuner{std::move(newTuner)},
                                         player{std::move(newPlayer)},
                                         cd{std::move(newCd)},
                                         projector{std::move(newProjector)},
                                         screen{std::move(newScreen)},
                                         lights{std::move(newLights)},
                                         popper{std::move(newPopper)}
    {

    }

    void HomeTheaterFacade::watchMovie(const std::string& movie)
    {
        std::cout << "Get ready to watch a movie..." << '\n';
        popper->on();
        popper->pop();
        lights->dim(10);
        screen->down();
        projector->on();
        projector->wideScreenMode();
        amp->on();
        amp->setStreamingPlayer(player);
        amp->setSurroundSound();
        amp->setVolume(5);
        player->on();
        player->play(movie);
    }

    void HomeTheaterFacade::endMovie()
    {
        std::cout << "Shutting movie theater down..." << '\n';
        popper->off();
        lights->on();
        screen->up();
        projector->off();
        amp->off();
        player->stop();
        player->off();
    }

    void HomeTheaterFacade::listenToRadio(double frequency)
    {
        std::cout << "Tuning in the airwaves..." << '\n';
        tuner->on();
        tuner->setFrequency(frequency);
        amp->on();
        amp->setVolume(5);
        amp->setTuner(tuner);
    }

    void HomeTheaterFacade::endRadio()
    {
        std::cout << "Shutting down the tuner..." << '\n';
        tuner->off();
        amp->off();
    }
}
