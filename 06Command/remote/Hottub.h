#pragma once

namespace command::remote
{
    class Hottub
    {
        bool isOn = false;

        int temperature = 0;

    public:
        void on();

        void off();

        void bubblesOn();

        void bubblesOff();

        void jetsOn();

        void jetsOff();

        void setTemperature(int newTemperature);

        void heat();

        void cool();
    };
}
