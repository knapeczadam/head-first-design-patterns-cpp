#pragma once

namespace command::party
{
    class Hottub
    {
        bool isOn = false;

        int temperature = 0;

    public:
        void on();

        void off();

        void circulate();

        void jetsOn();

        void jetsOff();

        void setTemperature(int newTemperature);
    };
}
