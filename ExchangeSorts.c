#include "ExchangeSorts.h"

/*
 * Function:
 * Description:
 */
void BubbleSort(int *data, int capacity) {
  int swapped;
  while (swapped) {
    swapped = 0;
    for (int i = 1; i < capacity; i++) {
      if (data[i - 1] > data[i]) {
        Swap(data, i - 1, i);
        swapped = 1;
      }
    }
  }
}

/*
 * Function:
 * Description:
 */
void StoogeSort(int *data, int first, int last) {
  if (first == last)
    return;

  if (data[first] > data[last]) {
    Swap(data, first, last);
  }

  if (first + 1 == last)
    return;

  int third = (last - first + 1) / 3;

  StoogeSort(data, first, last - third);
  StoogeSort(data, first + third, last);
  StoogeSort(data, first, last - third);
}

/*
 * Function:
 * Description:
 */
int QuickSortPartition(int *data, int first, int last) {
  int pivot = data[last];
  int i = first - 1;
  for (int j = first; j < last; j++) {
    if (data[j] < pivot) {
      i++;
      Swap(data, i, j);
    }
  }

  if (data[last] < data[i + 1]) {
    Swap(data, last, i + 1);
  }

  return i + 1;
}

/*
 * Function:
 * Description:
 */
void QuickSort(int *data, int first, int last) {
  if (first < last) {
    int p = QuickSortPartition(data, first, last);
    QuickSort(data, first, p - 1);
    QuickSort(data, p + 1, last);
  }
}

/*
 * Function:
 * Description:
 */
void CocktailSort(int *data, int capacity) {
  int swapped;

  while (swapped) {
    int start[2] = {1, capacity - 1};
    int end[2] = {capacity, 0};
    int inc[2] = {1, -1};

    for (int direction = 0; direction < 2; direction++) {
      swapped = 0;

      for (int i = start[direction]; i != end[direction]; i += inc[direction]) {
        if (data[i - 1] > data[i]) {
          Swap(data, i - 1, i);
          swapped = 1;
        }
      }
    }
  }
}

/*
 * Function:
 * Description:
 */
void OddEvenSort(int *data, int capacity) {
  int swapped;

  while (swapped) {
    swapped = 0;
    for (int i = 1; i < capacity - 1; i += 2) {
      if (data[i] > data[i + 1]) {
        Swap(data, i, i + 1);
        swapped = 1;
      }
    }

    for (int i = 0; i < capacity - 1; i += 2) {
      if (data[i] > data[i + 1]) {
        Swap(data, i, i + 1);
        swapped = 1;
      }
    }
  }
}

/*
 * Function:
 * Description:
 */
void CombSort(int *data, int capacity) {
  int gap = capacity;
  float shrink = 1.3;
  int sorted = 0;

  while (!sorted) {
    gap = gap / shrink;
    if (gap > 1)
      sorted = 0;
    else {
      gap = 1;
      sorted = 1;
    }

    for (int i = 0; i + gap < capacity; i++) {
      if (data[i] > data[i + gap]) {
        Swap(data, i, i + gap);
        sorted = 0;
      }
    }
  }
}
