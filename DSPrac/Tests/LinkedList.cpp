//
//  LinkedList.cpp
//  DSPrac
//
//  Created by John Tungul on 2/29/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "LinkedList.h"

template <class t>
LinkedList<t>::LinkedList(t data){
    headPtr = new Node<t>(data);
};

template <class t>
Node<t>* LinkedList<t>::getHead(){
    return headPtr;
};

template <class t>
void LinkedList<t>::add(t data){
    //current Linked List is Empty
    if (headPtr == nullptr){
        headPtr = new Node<t>(data);
    }
    else{
        Node<t> *current = headPtr;
        while (current->getNext()){
            current = current->getNext();
        }
        current->setNext(new Node<t>(data));
    }
};