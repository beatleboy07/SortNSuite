#ifndef FILEDATA_H
#define FILEDATA_H

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

/*
 * struct FileData
 * Description: a struct that will hold an integer value for number of
 *              items in file, and an array of the values from the file.
 */
struct FileData
{
        int* data;
        int size;
        int capacity;
        int sorted;
        float mean;
        int median;
        int mode;
        int hasMean;
        int hasMedian;
        int hasMode;
};

void InitializeFileDataArray(struct FileData * fileData, int capacity);
struct FileData* NewFileData(int capacity);
struct FileData* CreateNewFileData(int* data, int size, int capacity);
void FreeFileData(struct FileData * fileData);

int FileDataGetCapacity(struct FileData * fileData);
int FileDataGetSize(struct FileData *fileData);
int* FileDataGetData(struct FileData *fileData);
int FileDataGetEntity(struct FileData *fileData, int index);
int FileDataGetSorted(struct FileData *fileData);
float FileDataGetMean(struct FileData *fileData);
int FileDataGetMedian(struct FileData *fileData);
int FileDataGetMode(struct FileData *fileData);
int FileDataGetHasMean(struct FileData *fileData);
int FileDataGetHasMedian(struct FileData *fileData);
int FileDataGetHasMode(struct FileData *fileData);

void FileDataSetCapacity(struct FileData *fileData, int capacity);
void FileDataSetSize(struct FileData *fileData, int size);
void FileDataSetData(struct FileData *fileData, int* data);
void FileDataSetSorted(struct FileData *fileData, int sorted);
void FileDataSetMean(struct FileData *fileData, float mean);
void FileDataSetMedian(struct FileData *fileData, int median);
void FileDataSetMode(struct FileData *fileData, int mode);
void FileDataSetHasMean(struct FileData *fileData, int hasMean);
void FileDataSetHasMedian(struct FileData *fileData, int hasMedian);
void FileDataSetHasMode(struct FileData *fileData, int hasMode);

void PrintFileDataSize(struct FileData *fileData);
void PrintFileDataCapacity(struct FileData *fileData);
void PrintFileDataSorted(struct FileData *fileData);
void PrintFileDataMean(struct FileData *fileData);
void PrintFileDataMedian(struct FileData *fileData);
void PrintFileDataMode(struct FileData *fileData);
void PrintFileDataData(struct FileData *fileData);
void PrintFileDataStats(struct FileData *fileData);

void AddFileData(struct FileData *fileData, int val);
void DeleteFileData(struct FileData *fileData);

#endif // ! FILEDATA_H
