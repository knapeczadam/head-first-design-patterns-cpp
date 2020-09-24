#pragma once

#include "TV.h"

#include <memory>
#include <string>

namespace bridge::remote
{
    class TVFactory
    {
    public:
        std::shared_ptr<TV> getTV(const std::string& type);
    };
}
