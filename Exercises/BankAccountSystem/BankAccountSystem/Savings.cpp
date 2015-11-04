//
//  Savings.cpp
//  BankAccountSystem
//
//  Created by John Tungul on 11/3/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "Savings.h"

double Savings::withdraw(double amount){
  if (numWithdraws == 5)
      return 0;//Place holder for Exceptionn
  else if(amount > getBalance())
      return 0;//Place holder for Exception
  numWithdraws++;
  setBalance(getBalance() - amount);
    return getBalance();
};

