#pragma once

#include <string>

namespace decorator
{
    enum class EBeverageSize
    {
        Tall,
        Grande,
        Venti
    };

    class Beverage
    {
    protected:
        std::string description = "Unknown Beverage";

        EBeverageSize size = EBeverageSize::Tall;

    public:
        virtual std::string getDescription() const;

        virtual double cost() = 0;

        virtual EBeverageSize getSize() const;

        void setSize(EBeverageSize newSize);

        virtual ~Beverage() = default;
    };
}
