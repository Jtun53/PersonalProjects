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
LinkedList<t>::LinkedList(){
    headPtr = nullptr;
    count = 0;
};

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
};

template <class t>
bool LinkedList<t>::isEmpty(){
    if(count ==0)
        return true;
    return false;
};

template <class t>
std::vector<t> LinkedList<t>::toVector(){
    std::vector<t> myVec;
    Node<t> *ptr = headPtr;
    while (ptr){
        myVec.push_back(ptr->getData());
        ptr = ptr -> getNext();
    }
    return myVec;
};

template <class t>
bool LinkedList<t>::contains(const t &data){
    Node<t> *ptr = headPtr;
    while (ptr){
        if (ptr->getData() == data){
            return true;
        }
        ptr = ptr->getNext();
    }
    return false;
};

template <class t>
t LinkedList<t>::getEntry(int pos) const throw(std::exception){
    if (pos < 1 || pos > count){
        throw (std::exception());
    }
    else{
        Node<t> *ptr = headPtr;
        for (int i=1; i<pos; i++)
            ptr = ptr->getNext();
        return ptr->getData();
    }
};

template <class t>
bool LinkedList<t>::insert(int pos, const t &data) const throw(std::exception){
    
};
