#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int OpeningMenu();
int UnSortedFileData(char* fileName);
int SortedFileData(char* fileName);
int SortLibraries();
int ExchangeSorts();
int SelectionSorts();
int InsertionSorts();
int MergeSorts();
int DistributionSorts();
int ConcurrentSorts();
int HybridSorts();


#endif // !USERINTERFACE_H
