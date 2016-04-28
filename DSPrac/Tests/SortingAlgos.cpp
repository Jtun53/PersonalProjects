//
//  SortingAlgos.cpp
//  DSPrac
//
//  Created by John Tungul on 4/27/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#include <stdio.h>
#include "SortingAlgos.h"
#include <vector>
#include <string>
#include <algorithm>

template <class t>
void SortingAlgos<t>::bubbleSort(std::vector<t> &arr){
    for (int i = 1; i != arr.size(); i++){
        for (int j = 0; j != arr.size() - i; j++)
            if (arr[j] > arr[j+1])
                std::swap(arr[j],arr[j+1]);
    }
};

template <class t>
void SortingAlgos<t>::selectionSort(std::vector<t> &arr){
};

template <class t>
void SortingAlgos<t>::insertionSort(std::vector<t> &arr){
    
};

template <class t>
void SortingAlgos<t>::mergeSort(int first, int last, std::vector<t> &arr){
    
};

template <class t>
std::string SortingAlgos<t>::output(std::vector<t> &arr){
    std::string result;
    for (auto i = arr.begin(); i != arr.end(); i++){
        result += std::to_string(*i);
        if (i != arr.end()-1)
            result += " ";
    }
    return result;
};