//
//  Checking.h
//  BankAccountSystem
//
//  Created by John Tungul on 11/2/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#ifndef Checking_h
#define Checking_h
#include "Account.h"
class Checking : public Account{

  public:
    double withdraw(double amount);
};

#endif /* Checking_h */
