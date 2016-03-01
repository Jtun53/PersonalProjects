//
//  LinkedList.h
//  DSPrac
//
//  Created by John Tungul on 2/29/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h
#include "Node.h"
#include "Node.cpp"

template <class t>
class LinkedList{

private:
    Node<t> *headPtr;

public:
    LinkedList(t data);
    Node<t>* getHead();
    void add(t data);
    int remove(t data);
   // bool isEmpty();
   // t display();
};

#endif /* LinkedList_h */
