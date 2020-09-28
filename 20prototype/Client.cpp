#include "Dragon.h"
#include "Drakon.h"
#include "Monster.h"

#include <iostream>
#include <string>

using prototype::Dragon;
using prototype::Drakon;
using prototype::Monster;

std::unique_ptr<Monster> makeMonsterOperation(const std::shared_ptr<Monster>& monsterToCopy, const std::string& name)
{
    std::unique_ptr<Monster> newMonster = monsterToCopy->clone();
    newMonster->setName(name);
    return newMonster;
}

int main()
{
    std::shared_ptr<Monster> dragon = std::make_shared<Dragon>("Dragon", false);
    std::shared_ptr<Monster> drakon = std::make_shared<Drakon>("Drakon", 2, true);

    std::unique_ptr<Monster> ladon = makeMonsterOperation(dragon, "Ladon");
    std::unique_ptr<Monster> laconian = makeMonsterOperation(drakon, "Laconian");

    std::cout << *ladon << '\n';
    ladon->spitPoison();

    std::cout << *laconian << '\n';
    laconian->spitPoison();
}
