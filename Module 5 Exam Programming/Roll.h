#pragma once
#ifndef ROLL_H
#define ROLL_H

#include "Die.h"
#include <iostream>

int roll(Die& die, int target, int depth = 1) {
    int rollResult = die.roll();
    std::cout << "Roll " << depth << ": " << rollResult << std::endl;

    if (rollResult == target) {
        return depth;
    }
    else {
        return roll(die, target, depth + 1);
    }
}

#endif

