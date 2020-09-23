#include "IState.h"

namespace state::gumballstate
{
    std::ostream& operator<<(std::ostream& os, const IState& state)
    {
        state.toString(os);
        return os;
    }
}
