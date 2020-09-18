#include "Singleton.h"

namespace singleton::classic
{
    std::shared_ptr<Singleton> Singleton::getInstance()
    {
        if (uniqueInstance == nullptr)
        {
            struct enable_private_constructor : public Singleton { };
            uniqueInstance = std::make_shared<enable_private_constructor>();
        }
        return uniqueInstance;
    }

    std::string Singleton::getDescription() const
    {
        return "I'm a classic Singleton!";
    }

    std::shared_ptr<Singleton> Singleton::uniqueInstance = nullptr;
}
