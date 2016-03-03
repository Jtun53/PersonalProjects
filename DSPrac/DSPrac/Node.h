//
//  Node.h
//  DSPrac
//
//  Created by John Tungul on 2/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#ifndef Node_h
#define Node_h

template <class t>
class Node{
    
private:
    t data;
    Node<t> *next;
    
public:
    Node(const t &data);
    t getData();
    void setData(t data);
    Node* getNext();
    void setNext(Node *next);
};
#endif /* Node_h */
