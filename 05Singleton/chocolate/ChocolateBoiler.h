#pragma once

namespace singleton::chocolate
{
    class ChocolateBoiler final
    {
        bool empty = true;

        bool boiled = false;

        ChocolateBoiler() = default;

        ~ChocolateBoiler() = default;

    public:
        static ChocolateBoiler& getInstance();

        ChocolateBoiler(const ChocolateBoiler&) = delete;

        ChocolateBoiler& operator=(const ChocolateBoiler&) = delete;

        void fill();

        void drain();

        void boil();

        bool isEmpty() const;

        bool isBoiled() const;
    };
}
