//
//  main.cpp
//  Node
//
//  Created by Johnny on 2/7/15.
//  Copyright (c) 2015 John. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"
int main() {
    LinkedList<int> *ptr =new LinkedList<int>;
    ptr->add(5);
    ptr->add(2);
    ptr->add(7);
    ptr->add(9);
    ptr->remove(2);
    ptr->displayAll();
    ptr->add(8);
    ptr->displayAll();
}
