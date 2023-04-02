//
// Created by Oshard Henry on 3/29/23.
//

#ifndef BANKINGAPPCPP_USERINVESTMENT_H
#define BANKINGAPPCPP_USERINVESTMENT_H
#include <iostream>
#include <string>
using namespace std;

class UserInvestment {
private:
    string userName;
    double initialInvestAmt;
    double monthlyDeposit;
    double annualInterest;
    int numYears;

public:
    // access member functions
    string GetUserName();
    void SetUserName(string userName);
    unsigned int GetInitialInvestAmt();
    void SetInitialInvestAmt();
    unsigned int GetMonthlyDeposit();
    void SetMonthlyDeposit();
    unsigned int GetAnnualInterest();
    void SetAnnualInterest();
    unsigned int GetNumYears();
    void SetNumYears(int years);

    //member functions
    static double totalSum(double initialInvestment, double deposit);
    void interest();
    static void displayFormat1();
    void displayFormat2();
    void menuInput();
    static void headerFormat();

};


#endif //BANKINGAPPCPP_USERINVESTMENT_H
