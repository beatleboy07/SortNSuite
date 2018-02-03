#include "UserInterface.h"

/*
 * Function: OpeningMenu
 * Description: Displays the opening menu and waits for user input
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int OpeningMenu() {
  char input[8];

  while (1) {
    // Introductory Page
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout,
            "Welcome to the sorting suite!\nWhat would you like to do?\n");
    fprintf(stdout, "1. Select your own text file to sort.\n");
    fprintf(stdout, "2. Generate a text file with random values to sort.\n");
    fprintf(stdout, "\n3. Exit Program.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    // 49 is the ASCII value for 1 50 for 2
    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 100;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: UnSortedFileData
 * Description: Displays the menu based on the file containing unsorted data
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int UnSortedFileData(char *fileName) {
  char input[8];

  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "You have loaded the file: '%s'.\n", fileName);
    fprintf(stdout, "The file's data is unsorted.\n");
    fprintf(stdout, "What would you like to do next?\n");

    fprintf(stdout, "1. Print the file statistics.\n");
    fprintf(stdout, "2. Sort the file's data.\n");
    fprintf(stdout, "\n3. Exit Program.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    // 49 is the ASCII value for 1 50 for 2
    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 100;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: SortedFileData
 * Description: Displays the menu based on the file containing sorted data
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int SortedFileData(char *fileName) {
  char input[8];

  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "You have loaded the file: '%s'.\n", fileName);
    fprintf(stdout, "The file's data has been sorted.\n");
    fprintf(stdout, "What would you like to do next?\n");

    fprintf(stdout, "1. Print the file statistics.\n");
    fprintf(stdout, "2. Find the file data's mean.\n");
    fprintf(stdout, "3. Find the file data's median.\n");
    fprintf(stdout, "4. Find the file data's mode.\n");
    fprintf(stdout, "\n5. Exit Program.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    // 49 is the ASCII value for 1 50 for 2
    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else if (input[0] == 53) {
      return 100;
    }
    { fprintf(stdout, "Invalid selection. Try again.\n"); }
  }
}

/*
 * Function: SortLibraries
 * Description: Displays the menu to prompt which sorting libraries to use
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int SortLibraries() {
  char input[8];
  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "Which Sorting Library would you like to use?\n");
    fprintf(stdout, "1. Exchange Sorts\n");
    fprintf(stdout, "2. Selection Sorts\n");
    fprintf(stdout, "3. Insertion Sorts\n");
    fprintf(stdout, "4. Merge Sorts\n");
    fprintf(stdout, "5. Distribution Sorts\n");
    fprintf(stdout, "6. Concurrent Sorts\n");
    fprintf(stdout, "7. Hybrid Sorts\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else if (input[0] == 53) {
      return 5;
    } else if (input[0] == 54) {
      return 6;
    } else if (input[0] == 55) {
      return 7;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: ExchangeSorts
 * Description: Displays the menu to prompt which exchange sort to use
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int ExchangeSorts() {
  char input[8];
  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "Which Sorting algorithm would you like to use?\n");
    fprintf(stdout, "1. Bubble Sort\n");
    fprintf(stdout, "2. Stooge Sort\n");
    fprintf(stdout, "3. Quick Sort\n");
    fprintf(stdout, "4. Cocktail Sort\n");
    fprintf(stdout, "5. Odd Even Sort\n");
    fprintf(stdout, "6. Comb Sort\n");
    fprintf(stdout, "\n7. Go Back.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else if (input[0] == 53) {
      return 5;
    } else if (input[0] == 54) {
      return 6;
    } else if (input[0] == 55) {
      return 7;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: SelectionSorts
 * Description: Displays the menu to prompt which selection sort to use
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int SelectionSorts() {
  char input[8];
  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "Which Sorting algorithm would you like to use?\n");
    fprintf(stdout, "1. Selection Sort\n");
    fprintf(stdout, "2. Heap Sort\n");
    fprintf(stdout, "3. Smooth Sort\n");
    fprintf(stdout, "4. Cartesian Tree Sort\n");
    fprintf(stdout, "5. Tournament Sort\n");
    fprintf(stdout, "6. Cycle Sort\n");
    fprintf(stdout, "\n7. Go Back.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else if (input[0] == 53) {
      return 5;
    } else if (input[0] == 54) {
      return 6;
    } else if (input[0] == 55) {
      return 7;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: InsertionSorts
 * Description: Displays the menu to prompt which insertion sort to use
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int InsertionSorts() {
  char input[8];
  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "Which Sorting algorithm would you like to use?\n");
    fprintf(stdout, "1. Insertion Sort\n");
    fprintf(stdout, "2. Shell Sort\n");
    fprintf(stdout, "3. Splay Sort\n");
    fprintf(stdout, "4. Tree Sort\n");
    fprintf(stdout, "5. Library Sort\n");
    fprintf(stdout, "6. Patience Sort\n");
    fprintf(stdout, "\n7. Go Back.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else if (input[0] == 53) {
      return 5;
    } else if (input[0] == 54) {
      return 6;
    } else if (input[0] == 55) {
      return 7;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: MergeSorts
 * Description: Displays the menu to prompt which merge sort to use
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int MergeSorts() {
  char input[8];
  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "Which Sorting algorithm would you like to use?\n");
    fprintf(stdout, "1. Merge Sort\n");
    fprintf(stdout, "2. Cascade Merge Sort\n");
    fprintf(stdout, "3. Oscillating Merge Sort\n");
    fprintf(stdout, "4. Polyphase Merge Sort\n");
    fprintf(stdout, "\n5. Go Back.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else if (input[0] == 53) {
      return 5;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: DistributionSorts
 * Description: Displays the menu to prompt which distribution sort to use
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int DistributionSorts() {
  char input[8];
  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "Which Sorting algorithm would you like to use?\n");
    fprintf(stdout, "1. Amerian Flag Sort\n");
    fprintf(stdout, "2. Bead Sort\n");
    fprintf(stdout, "3. Bucket Sort\n");
    fprintf(stdout, "4. Burst Sort\n");
    fprintf(stdout, "5. Counting Sort\n");
    fprintf(stdout, "6. Pigeonhole Sort\n");
    fprintf(stdout, "7. Radix Sort\n");
    fprintf(stdout, "8. Flash Sort\n");
    fprintf(stdout, "\n9. Go Back.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else if (input[0] == 53) {
      return 5;
    } else if (input[0] == 54) {
      return 6;
    } else if (input[0] == 55) {
      return 7;
    } else if (input[0] == 56) {
      return 8;
    } else if (input[0] == 57) {
      return 9;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: ConcurrentSorts
 * Description: Displays the menu to prompt which concurrent sort to use
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int ConcurrentSorts() {
  char input[8];
  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "Which Sorting algorithm would you like to use?\n");
    fprintf(stdout, "1. Bitonic Sort\n");
    fprintf(stdout, "2. Batcher Odd-Even Merge Sort\n");
    fprintf(stdout, "3. Pairwise Sort Network\n");
    fprintf(stdout, "\n4. Go Back.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}

/*
 * Function: HybridSorts
 * Description: Displays the menu to prompt which hybrid sort to use
 * Input: User inputs a value based on the next desired step
 * Output: Returns an integer based on user input
 */
int HybridSorts() {
  char input[8];
  while (1) {
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "--------------------------------------------------\n");
    fprintf(stdout, "Which Sorting algorithm would you like to use?\n");
    fprintf(stdout, "1. Block Merge Sort\n");
    fprintf(stdout, "2. Tim Sort\n");
    fprintf(stdout, "3. Intro Sort\n");
    fprintf(stdout, "4. Spread Sort\n");
    fprintf(stdout, "\n5. Go Back.\n");

    fflush(stdin);
    fflush(stdout);

    fread(input, sizeof(char), 1, stdin);

    if (input[0] == 49) {
      return 1;
    } else if (input[0] == 50) {
      return 2;
    } else if (input[0] == 51) {
      return 3;
    } else if (input[0] == 52) {
      return 4;
    } else if (input[0] == 53) {
      return 5;
    } else {
      fprintf(stdout, "Invalid selection. Try again.\n");
    }
  }
}
