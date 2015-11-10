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

void Account::setAccountNumber(std::string accountNumber){
    this -> accountNumber = accountNumber;
};

std::string Account::getAccountNumer(){
    return this -> accountNumber;
};

void Account::deposit(double amount){
    this -> balance += amount;
};

void Account::setBalance(double amount){
    this -> balance = amount;
}
