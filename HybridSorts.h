#ifndef HYBRIDSORTS_H
#define HYBRIDSORTS_H

#include <stdlib.h>
#include <stdio.h>

void BlockMergeSort(int* data, int capacity);
void TimSort(int* data, int first, int last);
void IntroSort(int* data, int first, int last);
void SpreadSort(int* data, int capacity);

#endif // !HYBRIDSORTS_H
