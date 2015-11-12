//
//  Person.h
//  BankAccountSystem
//
//  Created by John Tungul on 11/7/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#ifndef Person_h
#define Person_h
#include "Checking.h"
#include "Savings.h"
#include <vector>
class Person{
    
    std::string firstName; //Names should be in Person instead of Account class
    std::string lastName;
    std::vector<Account*> accounts;
    Account *currentSelected;
    
public:
    std::string getFirstName();
    void setFirstName(std::string firstName);
    
    std::string getLastName();
    void setLastName(std::string lastName);
    
    void addAccount(Account *anAccount);
    Account* getAccount(std::string);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
};

#endif /* Person_h */
