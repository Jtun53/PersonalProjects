//
//  Checking.cpp
//  BankAccountSystem
//
//  Created by John Tungul on 11/2/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "Checking.h"

double Checking::withdraw(double amount){
    if (amount > getBalance())
        return 0;//Exception placeholder
    else{
        setBalance(getBalance() - amount);
        return getBalance();
    }
};