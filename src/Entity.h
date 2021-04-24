//
// Created by roman on 4/24/2021.
//

#ifndef TEST_PCH_ENTITY_H
#define TEST_PCH_ENTITY_H

#include "Component.h"
#include <vector>
#include <memory>


class Entity {
public:
    Entity(int id);
    void AddComponent(std::unique_ptr<Component>&& component);

private:
    int _id;
    std::vector<std::unique_ptr<Component>> _components;
};


#endif //TEST_PCH_ENTITY_H
