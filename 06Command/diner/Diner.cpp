#include "BurgerAndFriesOrder.h"
#include "Cook.h"
#include "Customer.h"
#include "Waitress.h"

#include <memory>

using command::diner::BurgerAndFriesOrder;
using command::diner::Cook;
using command::diner::Customer;
using command::diner::Waitress;

int main()
{
    std::shared_ptr<Cook> cook = std::make_shared<Cook>();
    std::shared_ptr<Waitress> waitress = std::make_shared<Waitress>();
    std::unique_ptr<Customer> customer = std::make_unique<Customer>(waitress);
    customer->createOrder(std::make_shared<BurgerAndFriesOrder>(cook));
    customer->hungry();
}
