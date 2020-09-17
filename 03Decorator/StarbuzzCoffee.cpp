#include "Beverage.h"
#include "DarkRoast.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "Soy.h"
#include "Whip.h"

#include <memory>
#include <iostream>

using decorator::Beverage;
using decorator::Espresso;
using decorator::DarkRoast;
using decorator::Mocha;
using decorator::Whip;
using decorator::HouseBlend;
using decorator::EBeverageSize;
using decorator::Soy;

int main()
{
    std::shared_ptr<Beverage> beverage = std::make_shared<Espresso>();
    std::cout << beverage->getDescription() << " $" << beverage->cost() << '\n';

    std::shared_ptr<Beverage> beverage2 = std::make_shared<DarkRoast>();
    beverage2 = std::make_shared<Mocha>(beverage2);
    beverage2 = std::make_shared<Mocha>(beverage2);
    beverage2 = std::make_shared<Whip>(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << '\n';

    std::shared_ptr<Beverage> beverage3 = std::make_shared<HouseBlend>();
    beverage3->setSize(EBeverageSize::Venti);
    beverage3 = std::make_shared<Soy>(beverage3);
    beverage3 = std::make_shared<Mocha>(beverage3);
    beverage3 = std::make_shared<Whip>(beverage3);
    std::cout << beverage3->getDescription() << " $" << beverage3->cost();
}
