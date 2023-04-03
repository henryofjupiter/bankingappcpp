#include <iostream>
#include <string>
#include "UserInvestment.h"

using namespace std;



int main() {
    UserInvestment user1; // class declaration for one user.

    // prints menu to user
    user1.menuInput();

    // output user's name
    cout << "User's Name: " << user1.printName() << endl;

    user1.displayFormat1(); // static display (no monthly deposit)
    user1.displayFormat2(); // static display (with monthly deposit)

    return 0;
}