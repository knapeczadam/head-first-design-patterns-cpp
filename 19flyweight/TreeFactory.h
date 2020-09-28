#pragma once

#include "ITree.h"

#include <memory>
#include <string>

namespace flyweight
{
    class TreeFactory
    {
        std::shared_ptr<ITree> d = nullptr;

        std::shared_ptr<ITree> c = nullptr;

    public:
        TreeFactory();

        std::shared_ptr<ITree> getTree(const std::string& type);
    };
}
