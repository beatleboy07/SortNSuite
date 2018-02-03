#ifndef MERGESORTS_H
#define MERGESORTS_H

#include <stdlib.h>
#include <stdio.h>

void MergeSort(int* data, int capacity);
void CascadeMergeSort(int* data, int first, int last);
int OscillatingMergeSort(int* data, int first, int last);
void PolyphaseMergeSort(int* data, int first, int last);

#endif // !MERGESORTS_H
