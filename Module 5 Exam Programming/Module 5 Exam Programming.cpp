// Module 5 Exam Programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "EmailValidator.h"
#include "Die.h"
#include "Roll.h

using namespace std;

void collectEmail() {
    string email;
    EmailValidator validator;

    while (true) {
        cout << "Please enter your email address: ";
        getline(cin, email);

        try {
            validator.validate(email);
        }
        catch (const AtError& e) {
            cout << "Error: " << e.what() << endl;
        }
   

    }
}




int main() {
  
    Die die; 

    int target;
    cout << "Enter a target value between 1 and 365: ";
    cin >> target;

    if (target < 1 || target > 365) {
        cout << "Target must be between 1 and 365." << endl;
        return 1;
    }

    int rolls = roll(die, target);  
    cout << "It took " << rolls << " rolls to get the right value " << target << "." << endl;


}



