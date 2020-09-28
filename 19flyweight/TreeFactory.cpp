#include "TreeFactory.h"

#include "ConiferTree.h"
#include "DeciduousTree.h"

#include <stdexcept>

namespace flyweight
{
    TreeFactory::TreeFactory()
    {
        c = std::make_shared<ConiferTree>();
        d = std::make_shared<DeciduousTree>();
    }

    std::shared_ptr<ITree> TreeFactory::getTree(const std::string& type)
    {
        if (type == "deciduous")
        {
            return d;
        }
        else if (type == "conifer")
        {
            return c;
        }
        else
        {
            throw std::invalid_argument("Invalid kind of tree");
        }
    }
}
