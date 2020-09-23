#include "IState.h"

namespace state::gumballstatewinner
{
    std::ostream& operator<<(std::ostream& os, const IState& state)
    {
        state.toString(os);
        return os;
    }
}
