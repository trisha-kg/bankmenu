//
//  BankAccount.cpp
//  assignment4
//
//  Created by Trisha on 9/23/19.
//  Copyright © 2019 Trisha. All rights reserved.
//
//import BankAccountH.hpp
#include "BankAccountH.hpp"

/*method takes an amount to withdraw as a parameter and only deducts it from the balance in the account IF there is enough “money” in the account to allow the withdrawal*/
bool BankAccount::withdrawal(int amount){
    if (amount > 0 && amount < getBalance()){
        mBalance = mBalance - amount;
        return true;
    }
    else {
        return false;
    }
}

/*method takes an amount to deposit as a parameter and adds it to the balance if this amount is positive*/
void BankAccount::deposit(int amount){
    if (amount > 0){
        mBalance = mBalance + amount;
    }
}

//first constructor, sets the mBalance member variable to 0
BankAccount::BankAccount(){
    mBalance = 0;
}

//second constructor,  takes an initial value to store in the mBalance member variable
BankAccount::BankAccount(int initialBalance){
    mBalance = initialBalance;
}

//getter method to access balance and return it
int BankAccount::getBalance(){
    return mBalance;
}

//setter variable to set balance to a specific amount
void BankAccount::setBalance(int newBalance){
    mBalance = newBalance;
}


