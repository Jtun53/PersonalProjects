//
//  Account.h
//  BankAccountSystem
//
//  Created by John Tungul on 10/29/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#ifndef Account_h
#define Account_h

class Account{
    enum Type { CHECKING, SAVINGS };
    std::string firstName;
    std::string lastName;
    std::string accountNumber;
    double balance;
};

//virtual Account()=0;

double getBalance();

void setFirstName(std::string firstName);
std::string getFirstName();

void setLastName(std::string lastName);
std::string getLastName();

void setAccountNumber(std::string accountNumber);
void getAccountNumer();


#endif /* Account_h */
