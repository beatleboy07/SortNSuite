/* Clifford Dunn - Various Sort Implementations Practice */

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "SortTools.h"

#include "ConcurrentSorts.h"
#include "DistributionSorts.h"
#include "ExchangeSorts.h"
#include "HybridSorts.h"
#include "InsertionSorts.h"
#include "MergeSorts.h"
#include "SelectionSorts.h"

#include "FileData.h"
#include "FileIO.h"
#include "UserInterface.h"

int main() {

  char *fileName;
  int stepSelection;
  int sortLibraries;
  int sortAlgo;

  /* Initial run of program includes the opening menu interface. This will
     prompt the user for a selection to either choose a specific file or
     generate a new one. If a new file is generated, further queries will be
     done in order to get the right data for the program. */
  int fileSelection = OpeningMenu();
  if (fileSelection == 1) {
    fileName = ChooseFile();
  } else if (fileSelection == 2) {
    fileName = GenFile();
  } else if (fileSelection == 100) {
    return 0;
  }

  struct FileData *fileData = ImportFile(fileName);

  /* This is the program's primary purpose. The while loop will indefinitely be
     available to prompt the user for desired actions until the user selects
     the option to quit the program. In this instance, the program is
     immediately exited. Otherwise, this loop will ontinue. */
  while (1) {

    /* This will determine if the file data has been sorted. If it has, the
       user interface will prompt differently than if the data is unsorted. */
    while (1) {

      if (FileDataGetSorted(fileData) == 0) {
        stepSelection = UnSortedFileData(fileName);
      } else {
        stepSelection = SortedFileData(fileName);
      }

      if (stepSelection == 1) {
        PrintFileDataStats(fileData);
      } else if (stepSelection == 2) {
        sortLibraries = SortLibraries();
        break;
      } else if (stepSelection == 100) {
        return 0;
      }
    }

    // Selecting Exchange Sorts
    if (sortLibraries == 1)
      sortAlgo = ExchangeSorts();

    if (sortAlgo == 1) {
      BubbleSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 2) {
      StoogeSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 3) {
      QuickSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 4) {
      CocktailSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 5) {
      OddEvenSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 6) {
      CombSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 7) {
    }

    // Selecting Selection Sorts
    if (sortLibraries == 2)
      sortAlgo = SelectionSorts();

    if (sortAlgo == 1) {
      SeletionSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 2) {
      HeapSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 3) {
      SmoothSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 4) {
      CartesianTreeSort(FileDataGetData(fileData),
                        FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 5) {
      TournamentSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 6) {
      CycleSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 7) {
    }

    // Selecting Insertion Sorts
    if (sortLibraries == 3)
      sortAlgo = InsertionSorts();

    if (sortAlgo == 1) {
      InsertionSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgj == 2) {
      ShellSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 3) {
      SplaySort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 4) {
      TreeSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 5) {
      LibrarySort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 6) {
      PatienceSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 7) {
    }

    // Selecting Merge Sorts
    if (sortLibraries == 4)
      sortAlgo = MergeSorts();

    if (sortAlgo == 1) {
      MergeSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 2) {
      CascadeMergeSort(FileDataGetData(fileData), 0,
                       FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 3) {
      OscillatingMergeSort(FileDataGetData(fileData), 0,
                           FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 4) {
      PolyphaseMergeSort(FileDataGetData(fileData),
                         FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 5) {
    }

    // Selecting Distribution Sorts
    if (sortLibraries == 5)
      sortAlgo = DistributionSorts();

    if (sortAlgo == 1) {
      AmericanFlagSort(FileDataGetData(fileData),
                       FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 2) {
      BeadSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 3) {
      BucketSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 4) {
      BurstSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 5) {
      CountingSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 6) {
      PigeonholeSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 7) {
      RadixSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 8) {
      FlashSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 9) {
    }

    // Selecting Concurrent Sorts
    if (sortLibraries == 6)
      sortAlgo = ConcurrentSorts();

    if (sortAlgo == 1) {
      BitonicSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 2) {
      BatcherOddEvenMergeSort(FileDataGetData(fileData), 0,
                              FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 3) {
      PairwiseSortNetwork(FileDataGetData(fileData), 0,
                          FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 4) {
    }

    // Selecting Hybrid Sorts
    if (sortLibraries == 7)
      sortAlgo = HybridSorts();

    if (sortAlgo == 1) {
      BlockMergeSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 2) {
      TimSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 3) {
      IntroSort(FileDataGetData(fileData), 0, FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 4) {
      SpreadSort(FileDataGetData(fileData), FileDataGetCapacity(fileData));
      FileDataSetSorted(fileData, 1);
    } else if (sortAlgo == 5) {
    }
  }
}

/*
double TimeSortPerformance(struct FileData *fileData, char *sortType) {
  int *data = FileDataGetData(fileData);
  int capacity = FileDataGetCapacity(fileData);
  clock_t start, end;

  start = clock();
  BubbleSort(data, capacity);
  end = clock();

  return ((double)(end - start)) / CLOCKS_PER_SEC;
}
*/
