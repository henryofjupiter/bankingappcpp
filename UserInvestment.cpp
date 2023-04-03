//
// Created by Oshard Henry on 3/29/23.
//

#include "UserInvestment.h"
#include <iomanip>
#include <string>

string UserInvestment::GetUserName() {
    return userName;
}

//calculates sum of initial investment amount and initial monthly deposit.
double UserInvestment::totalSum(double initialInvestment, double deposit) {
    double total = initialInvestment + deposit;
    return total;
}
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

//main menu for userinput
void UserInvestment::menuInput() {
    headerFormat();     //for displaying header
    cout << "Enter your name: ";
    cin >> userName;
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

void UserInvestment::interest(double opening, double monthly, double interest, int years) {
  double sumOfTotal = 0, sumOfInvestAmt = 0, sumOfInterest = 0, total = 0, newInterest, newOpening = opening;
    int i;
    for (i = 1; i <= years; ++i){
        for (int j = 1; j <= 12; ++j) {
            newInterest = (newOpening + monthly) * ((interest / 100)/12);
            total = newOpening + monthly + newInterest;
            newOpening = total;


            sumOfInterest += newInterest;

        }

        sumOfTotal += total;
        sumOfInvestAmt += newOpening;
        cout << i << formatSpaces(18, ' ') << "Total: " << fixed << setprecision(2) << sumOfTotal << formatSpaces(20, ' ') <<  sumOfInterest  << endl;
        newOpening = sumOfTotal;
    }

}