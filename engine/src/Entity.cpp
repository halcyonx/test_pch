//
// Created by roman on 4/24/2021.
//

#include "Entity.h"

Entity::Entity(int id)
    : _id(id)
{
    std::cout << "[Entity] created with id: " << _id << "\n";
}

void Entity::AddComponent(std::unique_ptr<Component>&& component) {
    std::cout << "[Entity] added component: " << component->GetName() << "\n";
    _components.emplace_back(std::move(component));
}
