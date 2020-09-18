#include "PizzaStore.h"

#include <utility>

namespace factory::pizzas
{
    PizzaStore::PizzaStore(std::shared_ptr<SimplePizzaFactory> newFactory) : factory{std::move(newFactory)}
    {

    }

    std::shared_ptr<factory::pizzas::Pizza> PizzaStore::orderPizza(const std::string& type)
    {
        std::shared_ptr<pizzas::Pizza> pizza = factory->createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
}
