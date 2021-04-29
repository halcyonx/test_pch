#include "Entity.h"
#include "Component.h"
#include "System.h"

#include <iostream>
// #include <>

int main() {
    std::cout << "Hello, World!" << std::endl;

    System system("main");
    system.AddEntity().AddComponent(std::make_unique<PositionComponent2D>(115.0f, 350.0f));

    return 0;
}
