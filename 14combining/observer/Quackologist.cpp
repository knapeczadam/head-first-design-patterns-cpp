#include "Quackologist.h"

#include <iostream>

namespace combining::observer
{
    void Quackologist::update(IQuackObservable* duck)
    {
        std::cout << "Quackologist: " << *duck << " just quacked." << '\n';
    }
}
