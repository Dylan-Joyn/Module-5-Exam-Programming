#pragma once
#ifndef ATERROR_H
#define ATERROR_H

#include <stdexcept>
#include <string>
using namespace std;

class AtError : public runtime_error {
public:
    explicit AtError(const string& message) : runtime_error(message) {}
};

class MultipleAtSignError : public AtError {
public:
    MultipleAtSignError() : AtError("Error: Email should include only one '@' sign.") {}
};

class LeadingAtSignError : public AtError {
public:
    LeadingAtSignError() : AtError("Error: Email should not begin with '@' sign.") {}
};

class MissingDotAfterAtError : public AtError {
public:
    MissingDotAfterAtError() : AtError("Error: Email should include at least one '.' after the '@' sign.") {}
};

#endif



