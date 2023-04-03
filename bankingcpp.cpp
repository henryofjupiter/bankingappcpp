#include <iostream>
#include <string>
#include <iomanip>
#include "UserInvestment.h"

using namespace std;



int main() {
    UserInvestment user1;
    string userName;

    user1.menuInput();
    cout << "User's Name: " << user1.GetUserName() << endl;
    user1.displayFormat1();
    user1.displayFormat2();

    return 0;
}