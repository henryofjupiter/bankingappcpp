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

    //member functions
    static double totalSum(double initialInvestment, double deposit);
    void interest(double opening, double monthly, double interest, int years);
    void displayFormat1();
    void displayFormat2();
    void menuInput();
    static void headerFormat();

};


#endif //BANKINGAPPCPP_USERINVESTMENT_H
