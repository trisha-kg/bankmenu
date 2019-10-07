//
//  MenuH.hpp
//  assignment4
//
//  Created by Trisha on 9/23/19.
//  Copyright © 2019 Trisha. All rights reserved.
//

#include <iostream>
#ifndef Menu_hpp
#define Menu_hpp

#include <stdio.h>

//use an enumeration to define constants for switch statements
enum MenuItemCode {
    cUnknownItem = 0,
    cBalanceInquiry,
    cSetBalance,
    cDeposit,
    cWithdrawal,
    cQuitItem,
};

//Menu class definition
class Menu
{
public:
    void showMenu();
    MenuItemCode promptUser();
};

#endif /* Menu_hpp */
