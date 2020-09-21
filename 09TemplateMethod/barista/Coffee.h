#pragma once

#include "CaffeineBeverage.h"

namespace templatemethod::barista
{
    class Coffee : public CaffeineBeverage
    {
    protected:
        void brew() override;

        void addCondiments() override;
    };
}
