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
    
    aPerson.setFirstName("John");
    std::cout<<aPerson.getFirstName() << std::endl; //output should be John
    
    
}
