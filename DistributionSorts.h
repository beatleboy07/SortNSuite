#ifndef DISTRIBUTIONSORTS_H
#define DISTRIBUTIONSORTS_H

#include <stdlib.h>
#include <stdio.h>

void AmericanFlagSort(int* data, int capacity);
void BeadSort(int* data, int first, int last);
void BucketSort(int* data, int first, int last);
void BurstSort(int* data, int capacity);
void CountingSort(int* data, int capacity);
void PigeonholeSort(int* data, int capacity);
void RadixSort(int* data, int capacity);
void FlashSort(int* data, int capacity);

#endif // !DISTRIBUTIONSORTS_H
