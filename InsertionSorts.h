#ifndef INSERTIONSORTS_H
#define INSERTIONSORTS_H

#include <stdlib.h>
#include <stdio.h>


void InsertionSort(int* data, int capacity);
void ShellSort(int* data, int first, int last);
int SplaySort(int* data, int first, int last);
void TreeSort(int* data, int first, int last);
void LibrarySort(int* data, int capacity);
void PatienceSort(int* data, int capacity);

#endif // !INSERTIONSORTS_H
