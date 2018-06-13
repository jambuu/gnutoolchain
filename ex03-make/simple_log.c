#include <stdio.h>

void simple_log(int *values, int size)
{
  if (size == 0) {
    printf("Empty Array");
    return;
  }
   printf("Input Array: [%d", values[0]);
   for (int i = 1 ; i < size; ++i) {
     printf(",%d",values[i]);
   }
   printf("]\n");
}

