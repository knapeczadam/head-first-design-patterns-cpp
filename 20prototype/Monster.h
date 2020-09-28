#pragma once

#include <memory>
#include <ostream>
#include <string>

namespace prototype
{
    class Monster
    {
    protected:
        bool eatsChildren = true;

        bool hasWings = false;

        int numHeads = 1;

        bool canBreatheFire = false;

        std::string name;

    public:
        virtual ~Monster() = 0;

        Monster(const Monster&) = delete;

        Monster& operator=(const Monster&) = delete;

        explicit Monster(std::string newName);

        virtual void spitPoison();

        void setName(const std::string& newName);

        virtual std::unique_ptr<Monster> clone() = 0;

        friend std::ostream& operator<<(std::ostream& os, const Monster& monster);
    };
}
