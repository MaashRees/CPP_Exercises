#pragma once

#include "Entity.hpp"
#include <iostream>

class Character : public Entity{
protected:

    Character(int x, int y) : Entity(x, y) {

    }

public:

    char get_representation() const override { return 'O'; }
private:
    int _x;
    int _y;
};