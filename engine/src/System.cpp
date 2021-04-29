//
// Created by roman on 4/24/2021.
//

#include "System.h"

System::System(const std::string &name)
    : _name(name)
{

}

Entity& System::AddEntity() {
    static int id = 0;
    _entities.push_back(++id);
    return _entities.back();
}

Entity &System::GetLastEntity() {
    return _entities.back();
}
