#include "a.h"
#include "b.h"

#include <iostream>

using antipattern::circulardependency::A;
using antipattern::circulardependency::B;

int main()
{
    A a;
    B b;
    a.b = &b;
    b.a = &a;

    std::cout << "done";
}
