#include "EmailValidator.h"
#include <algorithm>
#include <stdexcept>
#include <string>
#include <iostream>
using namespace std;

void EmailValidator::validate(const string& email) {
    size_t at_count = count(email.begin(), email.end(), '@');
    if (at_count != 1) {
        throw MultipleAtSignError();
    }

    if (email[0] == '@') {
        throw LeadingAtSignError();
    }

    size_t at_index = email.find('@');
    if (email.find('.', at_index) == string::npos) {
        throw MissingDotAfterAtError();
    }
}
