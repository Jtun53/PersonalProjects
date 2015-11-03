//
//  Account.cpp
//  BankAccountSystem
//
//  Created by John Tungul on 10/31/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Account.h"

Account::Account(){
    
};
Account::~Account(){
    
};

double Account::getBalance(){
    return this->balance;
};

void Account::setFirstName(std::string firstName){
    this->firstName = firstName;
};

std::string Account::getFirstName(){
    return this -> firstName;
};

void Account::setLastName(std::string lastName){
    this -> lastName = lastName;
};

std::string Account::getLastName(){
    return this -> lastName;
};

void Account::setAccountNumber(std::string accountNumber){
    this -> accountNumber = accountNumber;
};

std::string Account::getAccountNumer(){
    return this -> accountNumber;
};

