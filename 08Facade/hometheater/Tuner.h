#pragma once

#include "Amplifier.h"

#include <memory>
#include <ostream>
#include <string>

namespace facade::hometheater
{
    class Tuner
    {
        std::string description;

        std::shared_ptr<Amplifier> amplifier = nullptr;

        double frequency = 0.0;

    public:
        Tuner(std::string newDescription, std::shared_ptr<Amplifier> newAmplifier);

        void on();

        void off();

        void setFrequency(double newFrequency);

        void setAm();

        void setFm();

        friend std::ostream& operator<<(std::ostream& os, const Tuner& tuner);
    };
}
