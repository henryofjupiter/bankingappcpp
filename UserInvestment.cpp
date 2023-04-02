//
// Created by Oshard Henry on 3/29/23.
//

#include "UserInvestment.h"
#include <string>

string UserInvestment::GetUserName() {
    return userName;
}
void UserInvestment::SetUserName(string name) {
    this->userName = name;
}
unsigned int UserInvestment::GetInitialInvestAmt() {

}
void UserInvestment::SetInitialInvestAmt() {

}
unsigned int UserInvestment::GetMonthlyDeposit() {

}

void UserInvestment::SetMonthlyDeposit() {

}
unsigned int UserInvestment::GetAnnualInterest() {

}
void UserInvestment::SetAnnualInterest() {

}
unsigned int UserInvestment::GetNumYears() {
    return numYears;
}
void UserInvestment::SetNumYears(int years) {
    this->numYears = years;
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
    cout << "==========================================================================" << endl;
    cout << " Year" << formatSpaces(13, ' ') << "Year End Balance" << formatSpaces(13, ' ') << "Year End Earned Interest"<<endl;
    cout << "--------------------------------------------------------------------------" << endl;

}
//display for balance with additional monthly deposits
void UserInvestment::displayFormat2() {
    cout << endl;
    cout << endl;
    cout << "        Balance and Interest With Additional Monthly Deposits" << endl;
    cout << "==========================================================================" << endl;
    cout << " Year" << formatSpaces(13, ' ') << "Year End Balance" << formatSpaces(13, ' ') << "Year End Earned Interest"<<endl;
    cout << "--------------------------------------------------------------------------" << endl;
    interest();
    cout << endl;
}

// header format for menuInput
void UserInvestment::headerFormat() {
    cout << formatSpaces(32, '*') << endl;
    cout << formatSpaces(10, '*')  << " Data Input " << formatSpaces(10, '*') << endl;
}

//main menu for userinput
void UserInvestment::menuInput() {
    headerFormat();
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

}

void UserInvestment::interest() {
  double sumOfTotal = 0, sumOfInvestAmt = 0, sumOfInterest = 0, total = 0, interest;
  double opening = initialInvestAmt, md = monthlyDeposit;
    int i;
    for (i = 1; i <= 5; ++i){
        for (int j = 1; j <= 12; ++j) {
            interest = (opening + md) * ((annualInterest / 100)/12);
            total = opening + md;
            opening = total + interest;


            sumOfInterest += interest;

        }

        sumOfTotal += total;
        sumOfInvestAmt += opening;
        cout << i << formatSpaces(18, ' ') << "Total: " << sumOfTotal + sumOfInterest << formatSpaces(20, ' ') <<  sumOfInterest << endl;
    }

}