#include "GooseAdapter.h"

#include <utility>

namespace combining::observer
{
    GooseAdapter::GooseAdapter(std::shared_ptr<Goose> newGoose) : goose{std::move(newGoose)}
    {
        observable = std::make_shared<Observable>(this);
    }

    void GooseAdapter::quack()
    {
        goose->honk();
        notifyObservers();
    }

    void GooseAdapter::registerObserver(IObserver* observer)
    {
        observable->registerObserver(observer);
    }

    void GooseAdapter::notifyObservers()
    {
        observable->notifyObservers();
    }

    void GooseAdapter::toString(std::ostream& os) const
    {
        os << "Goose pretending to be a Duck";
    }
}
