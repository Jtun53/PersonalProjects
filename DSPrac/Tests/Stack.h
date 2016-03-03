//
//  Stack.h
//  DSPrac
//
//  Created by John Tungul on 3/3/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include "Node.h"

template <class t>
class Stack{
private:
    Node<t> *top;
    
public:
    Stack();
    bool isEmpty();
    void push(const t &data);
    bool pop();
    t peek();
};

#endif /* Stack_h */
