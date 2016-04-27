//
//  ArrayList.h
//  DSPrac
//
//  Created by John Tungul on 4/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#ifndef ArrayList_h
#define ArrayList_h

template <class t>
class ArrayList{
private:
    static const int MAXSIZE = 100;
    t list[MAXSIZE];
    int itemCount;
    
public:
    ArrayList();
    bool isEmpty();
    int getLength();
    bool insert(int pos,const t &data);
    bool remove(int pos);
    t getEntry(int pos);
    void clear();
};

#endif /* ArrayList_h */
