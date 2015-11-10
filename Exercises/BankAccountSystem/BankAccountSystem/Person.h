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
    string firstName; //Names should be in Person instead of Account class
    string lastName;
    vector<Account> accounts;
    
    string getFirstName();
    void setFirstName(std::string firstName);
    
    string getLastName();
    void setLastName(std::string lastName);
    
    void addAccount(Account anAccount);
};

#endif /* Person_h */
