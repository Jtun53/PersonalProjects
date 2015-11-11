//
//  Person.cpp
//  BankAccountSystem
//
//  Created by John Tungul on 11/9/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "Person.h"

std::string Person::getFirstName(){
    return this -> firstName;
};

void Person::setFirstName(std::string firstName){
    this -> firstName = firstName;
};

std::string Person::getLastName(){
    return this -> lastName;
};

void Person::setLastName(std::string lastName){
    this -> lastName = lastName;
};

void Person::addAccount(Account *anAccount){
    accounts.push_back(anAccount);
};

Account* Person::getAccount(std::string accountToFind){
    for (auto i = accounts.begin(); i != accounts.end(); i++){
        if ((*i)->getAccountNumber() == accountToFind){
            return *i;
        }
    }
    return nullptr; //Should error out
};

void Person::deposit(double amount){
    if (currentSelected == nullptr){
        std::cout << "Error, Account not selected";
        return;
    }
    else{
        currentSelected -> deposit(amount);
    }
};

void Person::withdraw(double amount){
    if (currentSelected == nullptr){
        std::cout << "Error, Account not selected";
        return;
    }
    else{
        currentSelected -> withdraw(amount);
    }
};