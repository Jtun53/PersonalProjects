//
//  Checking.cpp
//  BankAccountSystem
//
//  Created by John Tungul on 11/2/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "Checking.h"
#include <stdexcept>

Checking::Checking(std::string accountNum) : Account(accountNum){};

double Checking::withdraw(double amount){
    try{
        if (amount > getBalance())
            throw std::runtime_error("Error, Withdraw amount larger than available balance");
        else{
            setBalance(getBalance() - amount);
            return getBalance();
        }
    }
    catch (std::exception &e){
        std:: cout << "Caught Exception: " << e.what();
    }
    return 0;
};