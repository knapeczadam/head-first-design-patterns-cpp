#include "BurgerAndFriesOrder.h"

#include <utility>

namespace command::diner
{
    BurgerAndFriesOrder::BurgerAndFriesOrder(std::shared_ptr<Cook> newCook) : cook{std::move(newCook)}
    {

    }

    void BurgerAndFriesOrder::orderUp()
    {
        cook->makeBurger();
        cook->makeFries();
    }
}
