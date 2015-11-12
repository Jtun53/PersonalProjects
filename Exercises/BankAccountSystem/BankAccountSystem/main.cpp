//
//  main.cpp
//  BankAccountSystem
//
//  Created by John Tungul on 10/29/15.
//  Copyright © 2015 John Tungul. All rights reserved.
//

#include <iostream>
#include "Person.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    Person aPerson;
    std::cout.precision(2);
    
    aPerson.setFirstName("John");
    std::cout << aPerson.getFirstName() << std::endl; //output should be John
    
    aPerson.setLastName("Test");
    std::cout << aPerson.getLastName() << std::endl; // output should be Test
    
    //aPerson.deposit(20.00); //should error since no accounts available. NULLPTR, need to add exception handling
    
    aPerson.addAccount(new Checking("1234"));
    
    aPerson.getAccount("1234");
    
    std::cout << std::fixed << aPerson.getBalance() << std::endl;//output should be 0;
    aPerson.deposit(20.00);
    
    std::cout << std::fixed << aPerson.getBalance() << std::endl; //output should be 20.00;
    
    
    aPerson.getAccount("1234");
    aPerson.withdraw(15.00);
    std::cout << std::fixed << aPerson.getBalance() << std::endl; //output should be 5.00
    
    aPerson.withdraw(20.00); //should output "Error, withdraw greater than balance)
    std::cout << std::endl;
    
    aPerson.addAccount(new Savings ("4321"));
    aPerson.getAccount("4321");
    aPerson.deposit(100.00);
    std::cout << aPerson.getBalance() << std::endl; //output should be 100.00
    aPerson.getAccount("1234");
    std::cout << aPerson.getBalance() << std::endl; //output should be 5.00 again
    //added constructor in Checking and Savings class for accountNumber initialization
    //added getBalance function in Person Class
    //initialized balance in Account and currentAccount pointer in Person
}
