//
//  SortingAlgos.h
//  DSPrac
//
//  Created by John Tungul on 4/27/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#ifndef SortingAlgos_h
#define SortingAlgos_h
#include <vector>

template <class t>
class SortingAlgos{
    
public:
    static void bubbleSort(std::vector<t> &arr);
    static void insertionSort(std::vector<t> &arr);
    static void selectionSort(std::vector<t> &arr);
    static void mergeSort(int first, int last, std::vector<t> &arr);
    static std::string output(std::vector<t> &arr);
};

#endif /* SortingAlgos_h */
