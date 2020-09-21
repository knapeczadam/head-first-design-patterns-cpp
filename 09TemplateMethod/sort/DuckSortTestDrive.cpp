#include "Duck.h"

#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

using templatemethod::sort::Duck;

void display(const std::vector<std::shared_ptr<Duck>>& ducks)
{
    for (const auto& duck : ducks)
    {
        std::cout << *duck << '\n';
    }
}

int main()
{
    std::vector<std::shared_ptr<Duck>> ducks;
    ducks.reserve(6);
    ducks.emplace_back(std::make_shared<Duck>("Daffy", 8));
    ducks.emplace_back(std::make_shared<Duck>("Dewey", 2));
    ducks.emplace_back(std::make_shared<Duck>("Howard", 7));
    ducks.emplace_back(std::make_shared<Duck>("Louie", 2));
    ducks.emplace_back(std::make_shared<Duck>("Donald", 10));
    ducks.emplace_back(std::make_shared<Duck>("Huey", 2));

    std::cout << "Before sorting:" << '\n';
    display(ducks);

    std::sort(ducks.begin(), ducks.end());

    std::cout << "\nAfter sorting:" << '\n';
    display(ducks);
}
