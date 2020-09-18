#include "Singleton.h"

#include <iostream>
#include <memory>

using singleton::classic::Singleton;

int main()
{
    std::shared_ptr<Singleton> singleton = Singleton::getInstance();
    std::cout << singleton->getDescription();
}
