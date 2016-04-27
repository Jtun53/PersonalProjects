//
//  SortingAlgos.h
//  DSPrac
//
//  Created by John Tungul on 4/27/16.
//  Copyright © 2016 John Tungul. All rights reserved.
//

#ifndef SortingAlgos_h
#define SortingAlgos_h

template <class t>
class SortingAlgos{
    static void bubbleSort(t &arr);
    static void insertionSort(t &arr);
    static void selectionSort(t &arr);
    static void mergeSort(int first, int last, t &arr);
};

#endif /* SortingAlgos_h */
