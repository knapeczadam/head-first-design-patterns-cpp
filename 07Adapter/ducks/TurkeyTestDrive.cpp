#include "DuckAdapter.h"
#include "ITurkey.h"
#include "MallardDuck.h"

#include <iostream>
#include <memory>

using adapter::ducks::DuckAdapter;
using adapter::ducks::ITurkey;
using adapter::ducks::MallardDuck;

int main()
{
    std::shared_ptr<MallardDuck> duck = std::make_shared<MallardDuck>();
    std::unique_ptr<ITurkey> duckAdapter = std::make_unique<DuckAdapter>(duck);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << "The DuckAdapter says..." << '\n';
        duckAdapter->gobble();
        duckAdapter->fly();
    }
}
