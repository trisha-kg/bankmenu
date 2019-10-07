//
//  main.cpp
//  assignment4
//
//  Created by Trisha on 9/23/19.
//  Copyright © 2019 Trisha. All rights reserved.
//

#include <iostream>
//includes MenuH.hpp
#include "MenuH.hpp"
#include "BankAccountH.hpp"
//introduces namespace std
using namespace std;

/*global function that will prompt the user for a new balance and
then use the setBalance member function of the BankAccount class to set the
new balance */
void setBalance(BankAccount &inst1){
    int bal;
    cout << "Setting balance " << endl;
    cout << "ENTER NEW BALANCE> ";
    cin >> bal;
    inst1.setBalance(bal);
}

/*global function that will prompt the user for an amount to
withdrawal and then call the widthdrawal member function of the BankAccount
class to perform the withdrawal.*/
void withdrawal(BankAccount &inst2){
    cout << "Withdrawal" << endl;
    cout << "HOW MUCH DO YOU WANT TO WITHDRAWAL> ";
    int amt;
    cin >> amt;
    bool result = inst2.withdrawal(amt);
    if (result == true){
         cout << "Withdrawal successful" << endl;
    }
    else{
        cout << "Withdrawal failed" << endl;
    }
}

/*global function that will prompt the user for an amount to deposit
and then use the deposit member function of the BankAccount class to perform
the deposit*/
void deposit(BankAccount &inst3){
    cout << "Deposit" << endl;
    cout << "HOW MUCH DO YOU WANT TO DEPOSIT> ";
    int dep;
    cin >> dep;
    inst3.deposit(dep);
}

int main(int argc, const char * argv[]) {
    //declare an instance of Menu
    Menu x;
    //declare an instance of BankAccount
    BankAccount ba;
    bool yes = true;
    //enter a loop that terminates only when the user enters Quit (yes=false)
    while (yes){
        //shows the menu
        x.showMenu();
        //prompts the user for a menu choice by calling promptUser() method in Menu class
        MenuItemCode code = x.promptUser();
        //enter into switch statement that switches on the value returned by promptUser
        switch (code){
            case MenuItemCode::cBalanceInquiry: {
                //If the user entered balance, will show balance
                int bal = ba.getBalance();
                cout << "BALANCE:" << bal << endl;
                break;
            }
            case MenuItemCode::cSetBalance: {
                //If the user entered set balance, user can set balance
                setBalance(ba);
                break;
            }
            case MenuItemCode::cDeposit: {
                //If the user entered deposit, user can deposit a sum of money
                deposit(ba);
                break;
            }
            case MenuItemCode::cWithdrawal: {
                //If the user entered withdraw, user can withdraw a sum of money
                withdrawal(ba);
                break;
            }
            case MenuItemCode::cUnknownItem: {
                //If the user entered something else, print "Unknown selection" and break
                cout << "ERROR, unknown item selected" << endl;
                break;
            }
            case MenuItemCode::cQuitItem: {
                //If the user entered Quit, the loop breaks and the program terminates
                cout << "Quitting!" << endl;
                yes = false;
                break;
            }
        }
    }
    return 0;
}
