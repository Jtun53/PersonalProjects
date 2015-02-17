//
//  LinkedList.h
//  Node
//
//  Created by Johnny on 2/7/15.
//  Copyright (c) 2015 John. All rights reserved.
//  This is an implementation of a linked list
//  functions should include:
//  adding to list, deleting from list, retrieving,
//  and getting number of nodes.

#ifndef Node_LinkedList_h
#define Node_LinkedList_h
#include "Node.h"
template <class ItemType>
class LinkedList{
    private:
        int numNodes;
        Node<ItemType> *headPtr;
    
    public:
        LinkedList();
        const int getNumNodes();
        void add(const ItemType &item);
        bool remove(const ItemType &item);
        const ItemType retrieve(const int pos);
        void displayAll();
    
};

#endif
