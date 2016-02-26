//
//  Node.cpp
//  DSPrac
//
//  Created by John Tungul on 2/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//
#include "Node.h"

template <class t>
Node<t>::Node(const t &data){
    this->data = data;
    this->next = nullptr;
};

template <class t>
t Node<t>::getData(){
    return this->data;
};

template <class t>
void Node<t>::setData(t data){
    this->data = data;
};

template <class t>
Node<t>* Node<t>::getNext(){
    return this-> next;
};

template <class t>
void Node<t>::setNext(Node<t> *next){
    this->next = next;
}