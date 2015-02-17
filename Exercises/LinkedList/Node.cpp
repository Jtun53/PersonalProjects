//
//  Node.cpp
//  Node
//
//  Created by Johnny on 2/7/15.
//  Copyright (c) 2015 John. All rights reserved.
//

#include "Node.h"
//constructor, sets ptrToNext for each new node to null
template <class ItemType>
Node<ItemType>::Node(){
    ptrToNext=nullptr;
};

//set the data for each node
//Params = an item or value
template <class ItemType>
void Node<ItemType>::setData(const ItemType &item){
    data = item;
};

//returns the value/data for each node
template <class ItemType>
const ItemType Node<ItemType>::getData(){
    return data;
};

//sets the pointer to the next node in the list
template <class ItemType>
void Node<ItemType>::setNext(Node <ItemType> *ptr){
    ptrToNext=ptr;
};

//returns the next node in the list
template <class ItemType>
Node<ItemType>* Node<ItemType>::getNext(){
    return ptrToNext;
};
