//
// Created by roman on 4/24/2021.
//

#ifndef TEST_PCH_SYSTEM_H
#define TEST_PCH_SYSTEM_H

#include "Entity.h"
#include <vector>
#include <string>

class System {
public:
    System(const std::string& name);
    Entity& AddEntity();
    Entity& GetLastEntity();

private:
    std::string _name;
    std::vector<Entity> _entities;
};


#endif //TEST_PCH_SYSTEM_H
