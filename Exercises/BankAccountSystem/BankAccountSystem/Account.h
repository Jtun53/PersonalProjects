//
//  Account.h
//  BankAccountSystem
//
//  Created by John Tungul on 10/29/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#ifndef Account_h
#define Account_h
#include <iostream>
//Account type will be an abstract base class for Checking and Savings.
class Account{

    enum Type { CHECKING, SAVINGS };
    std::string accountNumber;

    double balance;

  public:
    Account();
    ~Account();
    Account(Type, std::string firstName, std::string lastName, std::string accountNumber);
    
    //return the current amount in a person's account
    double getBalance();
    void setBalance(double amount);

    void setAccountNumber(std::string accountNumber);
    std::string getAccountNumer();
    
    void deposit(double amount);
    
    /*set functionality as pure virtual to not allow Account objects be instantiated
    functions will be defined in derived classes*/
    virtual double withdraw(double amount)=0;
    
};

#endif /* Account_h */
