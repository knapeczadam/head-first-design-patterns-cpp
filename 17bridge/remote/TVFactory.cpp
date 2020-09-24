#include "TVFactory.h"

#include "LG.h"
#include "Sony.h"

#include <stdexcept>

namespace bridge::remote
{
    std::shared_ptr<TV> TVFactory::getTV(const std::string& type)
    {
        if (type == "LG")
        {
            return std::make_shared<LG>();
        }
        else if (type == "Sony")
        {
            return std::make_shared<Sony>();
        }
        throw std::invalid_argument("Invalid TV Type");
    }
}
