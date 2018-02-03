#include "SortTools.h"

/*
 * Function: Swap
 * Description: Perform a swap of two values inside an array
 */
void Swap(int *data, int element1, int element2) {
  int temp = data[element1];
  data[element1] = data[element2];
  data[element2] = temp;
}
