//
//  BankAccountH.hpp
//  assignment4
//
//  Created by Trisha on 9/23/19.
//  Copyright © 2019 Trisha. All rights reserved.
//

#ifndef BankAccountH_hpp
#define BankAccountH_hpp

#include <stdio.h>

//class definition for BankAccount, to manage a single instance of a bank account
class BankAccount {
public:
 BankAccount();
 BankAccount(int initialBalance);
 int getBalance();
 void setBalance(int newBalance);
 bool withdrawal(int amount);
 void deposit(int amount);
private:
 int mBalance;
};

#endif /* BankAccountH_hpp */
