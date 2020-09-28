#include "ITree.h"
#include "TreeFactory.h"

#include <iostream>
#include <memory>
#include <stdexcept>

using flyweight::ITree;
using flyweight::TreeFactory;

int main()
{
    int deciduousLocations[][2] = {{1,   1},
                                   {33,  50},
                                   {100, 90}};
    int coniferLocations[][2] = {{10, 87},
                                 {24, 76},
                                 {2,  64}};
    TreeFactory treeFactory;
    std::shared_ptr<ITree> d = nullptr;
    std::shared_ptr<ITree> c = nullptr;
    try
    {
        d = treeFactory.getTree("deciduous");
        c = treeFactory.getTree("conifer");
        for (const auto& location : deciduousLocations)
        {
            d->display(location[0], location[1]);
        }
        for (const auto& location : coniferLocations)
        {
            c->display(location[0], location[1]);
        }
    }
    catch (const std::invalid_argument& ia)
    {
        std::cerr << ia.what();
    }
}
