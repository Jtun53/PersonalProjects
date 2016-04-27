//
//  ArrayList.cpp
//  DSPrac
//
//  Created by John Tungul on 4/26/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "ArrayList.h"

template <class t>
ArrayList<t>::ArrayList(){
    itemCount = 0;
};

template <class t>
bool ArrayList<t>::isEmpty(){
    bool empty = false;
    (itemCount == 0) ? empty = true : empty = false;
    return empty;
};

template <class t>
bool ArrayList<t>::insert(int pos, const t &data){
    if (pos >= 1 && pos <= itemCount+1 && itemCount < MAXSIZE){
        //copy over items from pos to itemCount +1 to right
        for (int i = itemCount; i >= pos; i--){
            list[i] = list[i-1];
        }
        list[pos-1] = data;
        itemCount++;
        return true;
    }
    else
        return false;
};

template <class t>
int ArrayList<t>::getLength(){
    return itemCount;
};

template <class t>
bool ArrayList<t>::remove(int pos){
    if(pos <= itemCount && pos >= 1){
        for (int i = pos; i != itemCount; i++){
            list[i-1] = list[i];
        }
        itemCount--;
        return true;
    }
    else
        return false;
};
