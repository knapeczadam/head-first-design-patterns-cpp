#include "Hottub.h"

#include <iostream>

namespace command::remote
{
    void Hottub::on()
    {
        isOn = true;
    }

    void Hottub::off()
    {
        isOn = false;
    }

    void Hottub::bubblesOn()
    {
        if (isOn)
        {
            std::cout << "Hottub is bubbling!" << '\n';
        }
    }

    void Hottub::bubblesOff()
    {
        if (!isOn)
        {
            std::cout << "Hottub is not bubbling" << '\n';
        }
    }

    void Hottub::jetsOn()
    {
        if (isOn)
        {
            std::cout << "Hottub jets are on" << '\n';
        }
    }

    void Hottub::jetsOff()
    {
        if (!isOn)
        {
            std::cout << "Hottub jets are off" << '\n';
        }
    }

    void Hottub::setTemperature(int newTemperature)
    {
        temperature = newTemperature;
    }

    void Hottub::heat()
    {
        temperature = 105;
        std::cout << "Hottub is heating to a steaming 105 degrees" << '\n';
    }

    void Hottub::cool()
    {
        temperature = 98;
        std::cout << "Hottub is cooling to 98 degrees" << '\n';
    }
}
