//
//  main.cpp
//  Tests
//
//  Created by John Tungul on 2/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include <iostream>
#include "gtest/gtest.h"
#include "Node.cpp"
#include "LinkedList.cpp"
#include "Stack.cpp"
#include "ArrayList.cpp"


Node<int> *begin = new Node<int>(1);
Node<int> *head = begin;

TEST (Node, testNodeGetData){
    //TESTING getData() function
    EXPECT_EQ(begin->getData(), 1);
}

TEST (Node, testNodeSetData){
    begin->setNext(new Node<int> (5));
    begin = begin->getNext();
    //TESTING setNext() function
    EXPECT_EQ(begin->getData(), 5);
    
    //destroy unused objects
    while (head != nullptr){
        Node<int> *temp = head;
        head = head->getNext();
        delete temp;
        temp = nullptr;
    }
}

TEST (LinkedList, getHead){
    LinkedList<int> myList(5);
    Node<int> *ptr = myList.getHead();
    EXPECT_EQ(ptr->getData(), 5);
}

//Testing LinkedList add functionality
TEST (LinkedList, add){
    LinkedList<int> myList(1);
    Node<int> *ptr = myList.getHead();
    EXPECT_EQ(ptr->getData(),1);
    
    myList.add(2);
    ptr = ptr->getNext();
    EXPECT_EQ(ptr->getData(),2);
    
    myList.add(5);
    ptr = ptr->getNext();
    EXPECT_EQ(ptr->getData(),5);
    
    //destroy unused objects
    while (ptr != nullptr){
        Node<int> *temp = ptr;
        ptr = ptr->getNext();
        delete temp;
    }
    
}

TEST (LinkedList, remove){
    LinkedList<int> myList(2);
    myList.add(3);
    myList.add(6);
    myList.add(9);
    myList.remove(6);
    Node<int> *ptr = myList.getHead();
    ptr = ptr->getNext();
    ptr = ptr->getNext();
    EXPECT_EQ(ptr->getData(),9);
    myList.remove(2);
    EXPECT_EQ(myList.getHead()->getData(), 3);
    myList.remove(9);
    EXPECT_EQ(myList.getHead()->getNext(),nullptr);
}

TEST (LinkedList, isEmpty){
    LinkedList<int> myList(0);
    EXPECT_EQ(myList.isEmpty(), false);
    myList.add(3);
    EXPECT_EQ(myList.isEmpty(),false);
    myList.remove(3);
    myList.remove(0);
    EXPECT_EQ(myList.isEmpty(),true);
    
}

TEST (LinkedList, toVector){
    LinkedList<int> myList(0);
    myList.add(3);
    myList.add(2);
    myList.add(6);
    myList.add(4);
    myList.remove(3);
    std::vector<int> myVec = myList.toVector();
    EXPECT_EQ(myVec[0], 0);
    EXPECT_EQ(myVec[1], 2);
    EXPECT_EQ(myVec[2], 6);
}
TEST (LinkedList, contains){
    LinkedList<int> myList(3);
    EXPECT_EQ(myList.contains(3), true);
    myList.add(9);
    EXPECT_EQ(myList.contains(9), true);
    myList.remove(3);
    EXPECT_EQ(myList.contains(3),false);
    myList.add(3);
    myList.add(3);
    myList.remove(3);
    EXPECT_EQ(myList.contains(3),true);
}

TEST (LinkedList, getEntry){
    LinkedList<int> myList(2);
    myList.add(3);
    myList.add(9);
    myList.add(5);
    EXPECT_EQ(myList.getEntry(1), 2);
    EXPECT_EQ(myList.getEntry(2), 3);
    EXPECT_EQ(myList.getEntry(3), 9);
    EXPECT_EQ(myList.getEntry(4), 5);
}

TEST (Stack, isEmpty){
    Stack<int> myStack;
    EXPECT_EQ(myStack.isEmpty(), true);
    
}

TEST (Stack, push){
    Stack<int> myStack;
    myStack.push(3);
    EXPECT_EQ(myStack.isEmpty(), false);
}

TEST (Stack, pop){
    Stack<int> myStack;
    myStack.push(3);
    myStack.pop();
    EXPECT_EQ(myStack.isEmpty(), true);
    myStack.push(4);
    myStack.push(2);
    myStack.pop();
    EXPECT_EQ(myStack.isEmpty(),false);
    
}
TEST (Stack, peek){
    Stack<int> myStack;
    myStack.push(2);
    EXPECT_EQ(myStack.peek(), 2);
    myStack.push(4);
    EXPECT_EQ(myStack.peek(), 4);
    myStack.pop();
    EXPECT_EQ(myStack.peek(),2);
}

TEST (ArrayList,isEmpty){
    ArrayList<int> myArr;
    EXPECT_EQ(myArr.isEmpty(), true);
    myArr.insert(1,2);
    EXPECT_EQ(myArr.isEmpty(), false);
}

TEST (ArrayList, insert){
    ArrayList<int> myArr;
    myArr.insert(1,5);
    EXPECT_EQ(myArr.insert(2,2), true);
    EXPECT_EQ(myArr.insert(4,1), false);
    EXPECT_EQ(myArr.insert(-1,4), false);
}
/*

TEST (ArrayList,getLength){
}
 
 
TEST (ArrayList, remove){
}

TEST (ArrayList, clear){
}
*/

int main(int argc, char * argv[]) {
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
