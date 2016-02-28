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

TEST (Node, Addition){
    Node<int> *begin = new Node<int>(1);
    begin->setNext(new Node<int> (5));
    //TESTING getData() function
    EXPECT_EQ(begin->getData(), 1);
    
    begin = begin->getNext();
    //TESTING setNext() function
    EXPECT_EQ(begin->getData(), 5);
}


int main(int argc, char * argv[]) {
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
