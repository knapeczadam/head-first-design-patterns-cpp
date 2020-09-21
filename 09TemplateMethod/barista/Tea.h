#pragma once

#include "CaffeineBeverage.h"

namespace templatemethod::barista
{
    class Tea : public CaffeineBeverage
    {
    protected:
        void brew() override;

        void addCondiments() override;
    };
}
