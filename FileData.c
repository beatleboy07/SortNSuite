#include "FileData.h"

/*
 * Function: InitializeFileDataArray
 * Input: A pointer to the FileData struct, and the file capacity.
 * Output: All necessary memory allocated for FileData struct.
 */
void InitializeFileDataArray(struct FileData *fileData, int capacity) {
  // Insist that capacity is a valid number
  assert(capacity > 0);
  // Insist that fileData is actual pointer
  assert(fileData != NULL);

  // Allocate the memory for the type and insist that memory was allocated
  // fileData->data = (int *) malloc(sizeof(int) * capacity);
  assert(fileData->data != NULL);
  // Set the size and capacity values
  fileData->size = 0;
  fileData->capacity = capacity;
}

/*
 * Function: NewFileData
 * Input: Capacity of data
 * Output: A pointer to a FileData struct
 */
struct FileData *NewFileData(int capacity) {
  // Insist that capacity is a valid number
  assert(capacity > 0);
  // Allocate the memory for a FileData struct and insist it was accurate
  struct FileData *fileData =
      (struct FileData *)malloc(sizeof(struct FileData));

  assert(fileData != 0);
  // Fill the data then return the pointer
  InitializeFileDataArray(fileData, capacity);
  return fileData;
}

struct FileData *CreateNewFileData(int *data, int size, int capacity) {
  assert(capacity > 0);
  struct FileData *fileData =
      (struct FileData *)malloc(sizeof(struct FileData));
  assert(fileData != 0);

  fileData->data = data;
  fileData->size = size;
  fileData->capacity = capacity;
  fileData->sorted = 0;
  fileData->hasMean = 0;
  fileData->hasMedian = 0;
  fileData->hasMode = 0;

  return fileData;
}
/*
 * Function: FreeFileData
 * Input: Pointer to a FileData struct
 * Output: Memory allocation freed
 */
void FreeFileData(struct FileData *fileData) {
  // Insist that the FileData pointer is not NULL
  assert(fileData != NULL);

  // Check to see if the data within the FileData struct is pointed to NULL
  // If it is not, free the memory and point it to NULL
  if (fileData->data != NULL) {
    free(fileData->data);
    fileData->data = NULL;
  }

  // Set the size and capacity to 0
  fileData->size = 0;
  fileData->capacity = 0;
}

/*
 * Get functions
 */
int FileDataGetCapacity(struct FileData *fileData) {
  return fileData->capacity;
}

int FileDataGetSize(struct FileData *fileData) { return fileData->size; }

int *FileDataGetData(struct FileData *fileData) { return fileData->data; }

int FileDataGetEntity(struct FileData *fileData, int index) {
  return fileData->data[index];
}

int FileDataGetSorted(struct FileData *fileData) { return fileData->sorted; }

float FileDataGetMean(struct FileData *fileData) { return fileData->mean; }

int FileDataGetMedian(struct FileData *fileData) { return fileData->median; }

int FileDataGetMode(struct FileData *fileData) { return fileData->mode; }

int FileDataGetHasMean(struct FileData *fileData) { return fileData->hasMean; }

int FileDataGetHasMedian(struct FileData *fileData) {
  return fileData->hasMedian;
}

int FileDataGetHasMode(struct FileData *fileData) { return fileData->hasMode; }

/*
 * Set functions
 */
void FileDataSetCapacity(struct FileData *fileData, int capacity) {
  fileData->capacity = capacity;
}

void FileDataSetSize(struct FileData *fileData, int size) {
  fileData->size = size;
}

void FileDataSetData(struct FileData *fileData, int *data) {
  fileData->data = data;
}

void FileDataSetSorted(struct FileData *fileData, int sorted) {
  fileData->sorted = sorted;
}
void FileDataSetMean(struct FileData *fileData, float mean) {
  fileData->mean = mean;
}
void FileDataSetMedian(struct FileData *fileData, int median) {
  fileData->median = median;
}
void FileDataSetMode(struct FileData *fileData, int mode) {
  fileData->mode = mode;
}
void FileDataSetHasMean(struct FileData *fileData, int hasMean) {
  fileData->hasMean = hasMean;
}
void FileDataSetHasMedian(struct FileData *fileData, int hasMedian) {
  fileData->hasMedian = hasMedian;
}
void FileDataSetHasMode(struct FileData *fileData, int hasMode) {
  fileData->hasMode = hasMode;
}

void PrintFileDataSize(struct FileData *fileData) {
  fprintf(stdout, "FileData Size: %d\n", FileDataGetSize(fileData));
}

/*
 * Print functions
 */
void PrintFileDataCapacity(struct FileData *fileData) {
  fprintf(stdout, "FileData Capacity: %d\n", FileDataGetCapacity(fileData));
}

void PrintFileDataSorted(struct FileData *fileData) {
  if (FileDataGetSorted(fileData) == 0) {
    fprintf(stdout, "FileData Sorted: No\n");
  } else {
    fprintf(stdout, "FileData Sorted: Yes\n");
  }
}

void PrintFileDataMean(struct FileData *fileData) {
  if (FileDataGetHasMean(fileData) == 0) {
    fprintf(stdout, "FileData Mean Is Currently Unknown\n");
  } else {
    fprintf(stdout, "FileData Mean: %f\n", FileDataGetMean(fileData));
  }
}

void PrintFileDataMedian(struct FileData *fileData) {
  if (FileDataGetHasMedian(fileData) == 0) {
    fprintf(stdout, "FileData Median Is Currently Unknown\n");
  } else {
    fprintf(stdout, "FileData Median: %d\n", FileDataGetMedian(fileData));
  }
}

void PrintFileDataMode(struct FileData *fileData) {
  if (FileDataGetHasMode(fileData) == 0) {
    fprintf(stdout, "FileData Mode Is Currently Unknown\n");
  } else {
    fprintf(stdout, "FileData Mode: %d\n", FileDataGetMode(fileData));
  }
}

void PrintFileDataData(struct FileData *fileData) {
  fprintf(stdout, "FileData Data Elements:\n");
  for (int i = 0; i < FileDataGetSize(fileData); i++) {
    fprintf(stdout, "\t%d\n", FileDataGetEntity(fileData, i));
  }
}

void PrintFileDataStats(struct FileData *fileData) {
  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "Your FileData Statistics:\n");
  PrintFileDataCapacity(fileData);
  PrintFileDataSize(fileData);
  PrintFileDataSorted(fileData);
  PrintFileDataMean(fileData);
  PrintFileDataMedian(fileData);
  PrintFileDataMode(fileData);
  PrintFileDataData(fileData);
  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "--------------------------------------------------\n");
}
void AddFileData(struct FileData *fileData, int val) {
  int currSize = FileDataGetSize(fileData);
  int currCapacity = FileDataGetCapacity(fileData);
  assert(currSize < currCapacity);

  fileData->data[currSize] = val;
  fileData->size++;
}

/*
 * Function: DeleteFileData
 * Input: Pointer to FileData struct
 * Output: Free data being pointed to, free memory of struct
 */
void DeleteFileData(struct FileData *fileData) {
  // First free the array of data then free the FileData struct
  FreeFileData(fileData);
  free(fileData);
}
