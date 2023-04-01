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
    unsigned int initialInvestAmt;
    unsigned int monthlyDeposit;
    unsigned int annualInterest;
    unsigned int numYears;

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
    double interest();
    //void displayFormat1();
    void displayFormat2();
    void menuInput();

};


#endif //BANKINGAPPCPP_USERINVESTMENT_H
