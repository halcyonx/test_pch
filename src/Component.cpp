//
// Created by roman on 4/24/2021.
//

#include "Component.h"

PositionComponent2D::PositionComponent2D(float x, float y)
    : _x(x), _y(y)

{
    std::cout << "[Component] " << GetName() << " created: (" << x << ", " << y << ")\n";
}

std::string_view PositionComponent2D::GetName() const {
    return "PositionComponent2D";
}
