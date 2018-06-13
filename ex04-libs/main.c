#include <stdio.h>

#include "simple_sum.h"
#include "simple_sum.h"
#include "simple_sum.h"
#include "simple_log.h"
#include "simple_mse.h"

int main()
{
   const int size = 10;
   int values[size];
   for (int i = 0 ; i < 10; ++i)
     values[i] = i;

   simple_log(values, size);
   int sum    = simple_sum(values, size);
   double mse = simple_mse(values, size); 

   printf("Sum: %d MSE: %0.2f\n", sum, mse);
   return sum;
}
