//
//  Savings.cpp
//  BankAccountSystem
//
//  Created by John Tungul on 11/3/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "Savings.h"
#include <stdexcept>

double Savings::withdraw(double amount){
    try {
        if (numWithdraws == 5)
            throw std::runtime_error("Withdrawn more than number of times allowed!");
        else if(amount > getBalance())
            throw std::runtime_error("Withdraw amount greater than available balance!");
        numWithdraws++;
        setBalance(getBalance() - amount);
        return getBalance();
    }
    catch (std::exception &e){
        std::cout << "Exception occcured!: " << e.what();
    }
    return 0;
};