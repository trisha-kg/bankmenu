//
//  Menu.cpp
//  assignment4
//
//  Created by Trisha on 9/23/19.
//  Copyright © 2019 Trisha. All rights reserved.
//

#include "MenuH.hpp"
#include <iostream>
//includes MenuH.hpp
#include "MenuH.hpp"
//introduces namespace std
using namespace std;

//prints out the menu to the user
void Menu::showMenu(){
    cout << "---- MENU ----" << endl;
    cout << "(1) Balance Inquiry" << endl;
    cout << "(2) Set Balance" << endl;
    cout << "(3) Deposit" << endl;
    cout << "(4) Withdrawal" << endl;
    cout << "(5) Quit" << endl;
}

/*will prompt the user for a choice, accept an integer as input, and then will return the corresponding enumerated constant for the value entered*/
MenuItemCode Menu::promptUser(){
    int choice;
    MenuItemCode result = cUnknownItem;
    cout << "Enter Choice > ";
    cin >> choice;
    if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5){
        result = (MenuItemCode) choice;
    }
    else {
        result = cUnknownItem;
    }
    return result;
}
