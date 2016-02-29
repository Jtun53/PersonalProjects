//
//  main.cpp
//  Tests
//
//  Created by John Tungul on 2/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include <iostream>
#include "gtest/gtest.h"
#include "Node.cpp"


Node<int> *begin = new Node<int>(1);
Node<int> *head = begin;

TEST (Node, testNodeGetData){
    //TESTING getData() function
    EXPECT_EQ(begin->getData(), 1);
}

TEST (Node, testNodeSetData){
    begin->setNext(new Node<int> (5));
    begin = begin->getNext();
    //TESTING setNext() function
    EXPECT_EQ(begin->getData(), 5);
    
    //destroy unused objects
    while (head != nullptr){
        Node<int> *temp = head;
        head = head->getNext();
        delete temp;
        temp = nullptr;
    }
    
}


int main(int argc, char * argv[]) {
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
