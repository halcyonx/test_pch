//
// Created by roman on 4/24/2021.
//

#ifndef TEST_PCH_COMPONENT_H
#define TEST_PCH_COMPONENT_H

#include <string_view>

class Component {
public:
    Component() = default;
    virtual ~Component() = default;
    virtual std::string_view GetName() const = 0;
};

class PositionComponent2D : public Component {
public:
    PositionComponent2D(float x, float y);

    std::string_view GetName() const override;

private:
    float _x, _y;
};


#endif //TEST_PCH_COMPONENT_H
