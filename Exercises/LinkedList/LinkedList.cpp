//
//  LinkedList.cpp
//  Node
//
//  Created by Johnny on 2/7/15.
//  Copyright (c) 2015 John. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"
#include "Node.cpp"
//#define nullptr NULL

//New linked list, so we set headPtr to null since no nodes
//exist in the linked list yet, and so numNodes is also 0
template <class ItemType>
LinkedList<ItemType>::LinkedList(){
    headPtr=nullptr;
    numNodes=0;
    
};
//returns the current number of nodes in the list
template <class ItemType>
const int LinkedList<ItemType>::getNumNodes(){
    return numNodes;
};

//create new node, then set the data of the node to
//parameter. If this is not the first node in the list,
//set previous node's nextPtr to this node.
template <class ItemType>
void LinkedList<ItemType>::add(const ItemType &item){
    Node<ItemType> *ptr = new Node<ItemType>;
    ptr->setData(item);
    
    if (numNodes!=0){
    //  if numNodes is not 0, we need to find the last node
    //  in the list and set it's next node pointer to
    //  point to the new node.
        Node<ItemType> *cur = headPtr;
        while (cur->getNext()!=nullptr){
              cur = cur->getNext();
        }
        cur->setNext(ptr);
    }
    //Else it is the first node in the list, so we set the
    //headPtr to point to this node
    else{
        headPtr = ptr;
    }
    numNodes++;
    
};

//to remove a node, we traverse the list until we find
//the node that is equal to item. We then set the
//data of head to the data of target node.
//head can now be deleted since it is now in place of
//the node that was removed. Set head ptr to 1 after
//original head node.
template <class ItemType>
bool LinkedList<ItemType>::remove(const ItemType &item){
    Node<ItemType> *ptrToDelete = headPtr;
    while (ptrToDelete->getData() != item){
        ptrToDelete = ptrToDelete->getNext();
    }
    if (ptrToDelete == nullptr){
        return false;
    }
    else{
        ptrToDelete->setData(headPtr->getData());
        ptrToDelete = headPtr;
        headPtr = ptrToDelete->getNext();
        delete ptrToDelete;
        numNodes--;
    }
    return true;
};

//Head ptr is equal to position 1. We move forward pos
//times and then display the data at that node.
template <class ItemType>
const ItemType LinkedList<ItemType>::retrieve(const int pos){
    Node<ItemType> *ptr = headPtr;
    for (int i=0; i<pos-1;i++){
        ptr = ptr->getNext();
    }
    return ptr->getData();
};

//Traverse the list, starting from node pointed with
//headPtr and display the node's data
template <class ItemType>
void LinkedList<ItemType>::displayAll(){

    Node<ItemType>* cur=headPtr;
    while (cur != nullptr){
        std::cout<<cur->getData();
        cur = cur->getNext();
    }
};