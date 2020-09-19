#include "Hottub.h"

#include <iostream>

namespace command::party
{
    void Hottub::on()
    {
        isOn = true;
    }

    void Hottub::off()
    {
        isOn = false;
    }

    void Hottub::circulate()
    {
        if (isOn)
        {
            std::cout << "Hottub is bubbling!" << '\n';
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
        if (newTemperature > temperature)
        {
            std::cout << "Hottub is heating to a steaming " << newTemperature << " degrees" << '\n';
        }
        else
        {
            std::cout << "Hottub is cooling to " << newTemperature << " degrees" << '\n';
        }
        temperature = newTemperature;
    }
}
