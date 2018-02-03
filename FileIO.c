#include "FileIO.h"

/*
 * Function: FindFileCapacity
 * Input: The name of a text file
 * Output: Integer value of number of entries in the file
 */
int FindFileCapacity(char *fileName) {
  FILE *fileIn = fopen(fileName, "r");
  char chars;
  int numEntities = 0;

  while ((chars = fgetc(fileIn)) != EOF) {
    // Read entire file. If it comes across one of the delimiters,
    // add to the count.
    if (chars == '\n' ||
        // tab may not work. Unknown currently
        chars == '\t' || chars == ',' || chars == ' ')
    // then
    {
      numEntities++;
    }
  }
  fclose(fileIn);
  return numEntities;
}

/*
 * Function: ImportFileData
 * Input: The name of a text file, the number of entities in the file
 * Output: The array of integer data
 */

int *ImportFileData(char *fileName, int capacity) {
  int *data = malloc(sizeof(int) * capacity);

  FILE *fileIn = fopen(fileName, "r");

  for (int i = 0; i < capacity; i++) {
    fscanf(fileIn, "%d\n", &data[i]);
  }
  fclose(fileIn);
  return data;
}

/*
 * Function:ImportFile
 * Description: Takes a file name and outputs a FileData struct to sort.
 */
struct FileData *ImportFile(char *fileName) {
  int capacity = FindFileCapacity(fileName);
  int *data = ImportFileData(fileName, capacity);
  struct FileData *fileData = CreateNewFileData(data, capacity, capacity);
  return fileData;
}

/*
 * Function: CreateRandomFile
 * Input: File name and number of integers
 * Output: A new file will be created in current directory
 */

void CreateRandomFile(char *fileName, int numEntities) {
  srand(time(0));
  FILE *newFile = fopen(fileName, "w");

  for (int i = 0; i < numEntities; i++) {
    fprintf(newFile, "%d\n", rand() % 22222);
  }

  fclose(newFile);
}

/*
 * Function: ChooseFile
 * Input: User will be prompted for the name of a text file
 * Output: The name of the chosen file will be returned
 */
char *ChooseFile() {
  char *input = NULL;
  char *fileName;
  size_t len = 0;
  ssize_t read;
  FILE *checkFile;
  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "Enter the name of a text file in this directory.\n");

  fflush(stdin);
  fflush(stdout);

  while ((read = getline(&input, &len, stdin)) != -1) {

    if (read > 1) {
      fileName = malloc(sizeof(char) * len);
      strncpy(fileName, input, strlen(input) - 1);
      checkFile = fopen(fileName, "r");

      if (checkFile == NULL) {
        fprintf(stdout, "Cannot open file '%s'\n", fileName);
        free(fileName);
        fprintf(stdout, "Enter the name of a text file in this directory.\n");
      }

      else {
        fclose(checkFile);
        break;
      }
    }
  }
  return fileName;
}

/*
 * Function: GenFile
 * Input: User will be prompted for the name of a text file and number of values
 * Output: A new text file with the desired number of integers will be created
 */
char *GenFile() {

  char *input = NULL;
  char *fileName;
  size_t len = 0;
  ssize_t read;

  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "Enter the name of a text file to create.\n");

  while ((read = getline(&input, &len, stdin)) != -1) {
    if (read > 1) {
      fileName = malloc(sizeof(char) * len);
      strncpy(fileName, input, strlen(input) - 1);
      break;
    }
  }

  char *intInput = NULL;
  len = 0;
  read = 0;
  long num;
  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "--------------------------------------------------\n");
  fprintf(stdout, "How many numbers would you like to generate?\n");

  while ((read = getline(&intInput, &len, stdin)) != -1) {
    if (read > 1) {
      num = strtol(intInput, NULL, 10);
      break;
    }
  }

  fprintf(stdout, "Num is: %ld\n", num);

  CreateRandomFile(fileName, num);
  return fileName;
}
