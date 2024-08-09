#pragma once
#ifndef DIE_H
#define DIE_H

#include <cstdlib>
#include <ctime>
using namespace std;

class Die {
public:
    Die(int sides = 365) : sides(sides) {
        srand(time(0));
    };

    int roll() {
        return rand() % sides + 1;
    }

private:
    int sides;
};

#endif


