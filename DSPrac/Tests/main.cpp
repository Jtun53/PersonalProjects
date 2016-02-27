//
//  main.cpp
//  Tests
//
//  Created by John Tungul on 2/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include <iostream>
#include "gtest/gtest.h"
#include "calc.h"

TEST (Node, Addition){
    EXPECT_EQ(addition(10,10), 20);
}


int main(int argc, char * argv[]) {
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
