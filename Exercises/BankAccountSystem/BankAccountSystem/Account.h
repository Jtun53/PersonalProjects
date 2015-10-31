//
//  Account.h
//  BankAccountSystem
//
//  Created by John Tungul on 10/29/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#ifndef Account_h
#define Account_h

//Account type will be an abstract base class for Checking and Savings.
class Account{
    enum Type { CHECKING, SAVINGS };
    std::string firstName;
    std::string lastName;
    std::string accountNumber;
    double balance;

    
    Account(Type, std::string firstName, std::string lastName, std::string accountNumber);
    
    //return the current amount in a person's account
    double getBalance();
    
    void setFirstName(std::string firstName);
    std::string getFirstName();

    void setLastName(std::string lastName);
    std::string getLastName();

    void setAccountNumber(std::string accountNumber);
    std::string getAccountNumer();
    
    /*set functionality as pure virtual to not allow Account objects be instantiated
    functions will be defined in derived classes*/
    virtual void deposit()=0;
    virtual void withdraw()=0;
    
};

#endif /* Account_h */
