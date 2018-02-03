#ifndef FILEIO_H
#define FILEIO_H

#define _GNU_SOURCE

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "FileData.h"

int FindFileCapacity(char* fileName);
int* ImportFileData(char* fileName, int capacity);

struct FileData *ImportFile(char* fileName);
void CreateRandomFile(char* fileName, int numEntities);

char *ChooseFile();
char *GenFile();

#endif // !FILEIO_H
