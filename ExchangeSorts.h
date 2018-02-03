#ifndef EXCHANGESORTS_H
#define EXCHANGESORTS_H

#include <stdlib.h>
#include <stdio.h>

void BubbleSort(int* data, int capacity);
void StoogeSort(int* data, int first, int last);
int QuickSortPartition(int* data, int first, int last);
void QuickSort(int* data, int first, int last);
void CocktailSort(int* data, int capacity);
void OddEvenSort(int* data, int capacity);
void CombSort(int* data, int capacity);

#endif // !EXCHANGESORTS_H
