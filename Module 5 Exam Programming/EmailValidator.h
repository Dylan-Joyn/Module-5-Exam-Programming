#pragma once
#ifndef EMAILVALIDATOR_H
#define EMAILVALIDATOR_H

#include <string>
#include "AtError.h"
using namespace std;

class EmailValidator {
public:
    void validate(const string& email);
};

#endif


