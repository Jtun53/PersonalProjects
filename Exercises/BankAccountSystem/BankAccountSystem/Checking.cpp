//
//  Checking.cpp
//  BankAccountSystem
//
//  Created by John Tungul on 11/2/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "Checking.h"

void Checking::deposit(double amount){
    this -> balance += amount;
};

double Checking::withdraw(double amount){
    return 0.0;
};