#ifndef SELECTIONSORTS_H
#define SELECTIONSORTS_H

#include <stdlib.h>
#include <stdio.h>


void SelectionSort(int* data, int capacity);
void HeapSort(int* data, int first, int last);
void SmoothSort(int* data, int first, int last);
void CartesianTreeSort(int* data, int capacity);
void TournamentSort(int* data, int capacity);
void CycleSort(int* data, int capacity);

#endif // !SELECTIONSORTS_H
