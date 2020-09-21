#include "Tuner.h"

#include <iostream>
#include <utility>

namespace facade::hometheater
{
    Tuner::Tuner(std::string newDescription, std::shared_ptr<Amplifier> newAmplifier) : description{std::move(newDescription)}, amplifier{std::move(newAmplifier)}
    {

    }

    void Tuner::on()
    {
        std::cout << description << " on" << '\n';
    }

    void Tuner::off()
    {
        std::cout << description << " off" << '\n';
    }

    void Tuner::setFrequency(double newFrequency)
    {
        frequency = newFrequency;
        std::cout << description << " setting frequency to " << frequency << '\n';
    }

    void Tuner::setAm()
    {
        std::cout << description << " setting AM mode" << '\n';
    }

    void Tuner::setFm()
    {
        std::cout << description << " setting FM mode" << '\n';
    }

    std::ostream& operator<<(std::ostream& os, const Tuner& tuner)
    {
        os << tuner.description;
        return os;
    }
}
