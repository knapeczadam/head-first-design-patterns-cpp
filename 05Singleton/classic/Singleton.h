#pragma once

#include <memory>
#include <string>

namespace singleton::classic
{
    class Singleton
    {
        static std::shared_ptr<Singleton> uniqueInstance;

        Singleton() = default;

    public:
        static std::shared_ptr<Singleton> getInstance();

        std::string getDescription() const;

        Singleton(const Singleton&) = delete;

        Singleton& operator=(const Singleton&) = delete;

        ~Singleton() = default;
    };
}
