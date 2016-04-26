//
//  ArrayList.cpp
//  DSPrac
//
//  Created by John Tungul on 4/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "ArrayList.h"

template <class t>
ArrayList<t>::ArrayList(){
    itemCount = 0;
}

template <class t>
bool ArrayList<t>::isEmpty(){
    bool empty = false;
    (itemCount == 0) ? empty = true : empty = false;
    return empty;
};