//
// Created by Oshard Henry on 3/29/23.
//

#include "UserInvestment.h"
#include <iomanip>
#include <string>

// format string spaces for output
string formatSpaces(int size, char c) {
    string newString;
    for (int i = 0; i < size; ++i) {
        newString += c;
    }
    return newString;
}

// display for balance without additional monthly deposit
void UserInvestment::displayFormat1() {
    cout << "        Balance and Interest Without Additional Monthly Deposits" << endl;
    cout << formatSpaces(75,'=') << endl;
    cout << " Year" << formatSpaces(13, ' ') << "Year End Balance" << formatSpaces(13, ' ') << "Year End Earned Interest"<<endl;
    cout << formatSpaces(75,'-') << endl;
    interest(initialInvestAmt, 0, annualInterest, numYears);
}

//display for balance with additional monthly deposits
void UserInvestment::displayFormat2() {
    cout << endl;
    cout << endl;
    cout << "        Balance and Interest With Additional Monthly Deposits" << endl;
    cout << formatSpaces(75,'=') << endl;
    cout << " Year" << formatSpaces(13, ' ') << "Year End Balance" << formatSpaces(13, ' ') << "Year End Earned Interest"<<endl;
    cout << formatSpaces(75,'-') << endl;
    interest(initialInvestAmt, monthlyDeposit, annualInterest, numYears);
    cout << endl;
}

// header format for menuInput
void UserInvestment::headerFormat() {
    cout << formatSpaces(32, '*') << endl;
    cout << formatSpaces(10, '*')  << " Data Input " << formatSpaces(10, '*') << endl;
}

//main menu for user input
void UserInvestment::menuInput() {
    headerFormat();     //for displaying header
    cout << "Enter your name: ";
    getline(cin, userName);
    cout << "Initial Investment Amount: ";
    cin >> initialInvestAmt;
    cout << "Monthly Deposit: ";
    cin >> monthlyDeposit;
    cout << "Annual Interest: ";
    cin >> annualInterest;
    cout <<  "Number of Years: ";
    cin >> numYears;
    cout << endl;
    cout << endl;

}

// calculates both end of year interest and balance, given a number of years from input.
void UserInvestment::interest(double opening, double monthly, double interest, int years) {
  double sumOfInterest2, sumOfInterest = 0, total, newInterest, balance = opening;

    for (int i = 1; i <= years; ++i){   // calculates interest and balance per year
        sumOfInterest2 = sumOfInterest; // assigns sum of interest from the past year.
        for (int j = 1; j <= 12; ++j) {  // calculates interest and balance per month for 12 months
            newInterest = (balance + monthly) * (interest / 100)/12; // formula for interest balance
            total = balance + monthly + newInterest;
            balance = total;

            sumOfInterest += newInterest;

        }
        if (i >= 2) {
            newInterest = sumOfInterest - sumOfInterest2; // current accumulated interest - past year's interest = final interest for the current year
        }
        else {
            newInterest = sumOfInterest;
        }
        balance = total;  // balance update: carry over end of year balance to the next year.
        cout << i << formatSpaces(20, ' ') << fixed << setprecision(2) << balance << formatSpaces(30, ' ') <<  newInterest  << endl;
    }

}