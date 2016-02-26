//
//  NodeTests.cpp
//  DSPrac
//
//  Created by John Tungul on 2/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Node.h"
class NodeTests{
public:
    NodeTests(){
        Node<int> *begin = new Node<int>(5);
        begin->setNext(new Node<int>(3));
        begin->getNext()->setNext(new Node<int>(4));
        begin->getNext()->getNext()-> setNext(new Node<int>(8));
        //should output 5, 3, 4, 8
        while (begin != nullptr){
            std::cout<<begin->getData();
            begin = begin->getNext();
        }
        
    }
};