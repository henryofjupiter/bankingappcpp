//
// Created by Oshard Henry on 3/29/23.
//

#ifndef BANKINGAPPCPP_USERINVESTMENT_H
#define BANKINGAPPCPP_USERINVESTMENT_H
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
    void SetUserName();
    unsigned int GetInitialInvestAmt();
    void SetInitialInvestAmt();
    unsigned int GetMonthlyDeposit();
    void SetMonthlyDeposit();
    unsigned int GetAnnualInterest();
    void SetAnnualInterst();
    unsigned int GetNumYears();
    void SetNumYears();

    //member functions
    unsigned int totalSum();
    void displayFormat();
    void menuInput();

};


#endif //BANKINGAPPCPP_USERINVESTMENT_H
