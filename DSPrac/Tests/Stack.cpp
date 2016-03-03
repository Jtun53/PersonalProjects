//
//  Stack.cpp
//  DSPrac
//
//  Created by John Tungul on 3/3/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include "Stack.h"

template <class t>
Stack<t>::Stack(){
    top = nullptr;
}

template <class t>
bool Stack<t>::isEmpty(){
    if (top == nullptr)
        return true;
    else
        return false;
};

template <class t>
void Stack<t>::push(const t &data){
    Node<t> *current = top;
    top = new Node<t>(data);
    top->setNext(current);
}

template <class t>
bool Stack<t>::pop(){
    if(top){
        Node<t> *nodeToDelete = top;
        top = top->getNext();
        nodeToDelete->setNext(nullptr);
        delete nodeToDelete;
        nodeToDelete = nullptr;
        return true;
    }
    else
        return false;
};

template <class t>
t Stack<t>::peek(){
    
};