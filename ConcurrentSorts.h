#ifndef CONCURRENTSORTS_H
#define CONCURRENTSORTS_H

#include <stdlib.h>
#include <stdio.h>


void BitonicSort(int* data, int capacity);
void BatcherOddEvenMergeSort(int* data, int first, int last);
void PairwiseSortNetwork(int* data, int first, int last);

#endif // !CONCURRENTSORTS_H
