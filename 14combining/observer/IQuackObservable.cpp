#include "IQuackObservable.h"

namespace combining::observer
{
    std::ostream& operator<<(std::ostream& os, const IQuackObservable& observable)
    {
        observable.toString(os);
        return os;
    }
}
