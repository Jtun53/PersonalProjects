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
LinkedList<t>::LinkedList(const t &data){
    headPtr = new Node<t>(data);
    count = 1;
};

template <class t>
Node<t>* LinkedList<t>::getHead(){
    return headPtr;
};

template <class t>
void LinkedList<t>::add(const t &data){
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
    count++;
};

template <class t>
int LinkedList<t>::remove(const t &data){
    Node<t> *ptr = headPtr;
    
    //head ptr is the data to remove;
    if (ptr -> getData() == data){
        //the item to remove is head and the sole node
        if ( count == 0){
            Node<t> *temp = headPtr;
            delete temp;
            headPtr = nullptr;
            temp = nullptr;
        }
        //there is more than 1 node.
        else{
            Node<t> *temp = headPtr;
            headPtr = temp->getNext();
            delete temp;
            temp = nullptr;
        }
        count--;
        return 1;
    }
    // node to delete is somewhere in the middle or end
    Node<t> *next = ptr->getNext();
    while (next){
        if (next->getData() == data){
            Node<t> *temp = next;
            ptr->setNext(temp->getNext());
            delete temp;
            count--;
        }
        ptr = next;
        next = next->getNext();
    }
    return -1;
}

template <class t>
bool LinkedList<t>::isEmpty(){
    if(count ==0)
        return true;
    return false;
}