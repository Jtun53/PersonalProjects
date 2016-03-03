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
#include <vector>
#include <Exception>

template <class t>
class LinkedList{

private:
    Node<t> *headPtr;
    int count;

public:
    LinkedList();
    LinkedList(const t &data);
    Node<t>* getHead();
    void add(const t &data);
    int remove(const t &data);
    bool isEmpty();
    bool contains(const t &data);
    
    t getEntry(int pos) const throw (std::exception);
    bool insert(int pos, const t &data) const throw (std::exception);
    
    std::vector<t> toVector();
};

#endif /* LinkedList_h */
