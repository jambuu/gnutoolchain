#include <stdio.h>

int    simple_sum(int *values, int n);
double simple_mse(int *values, int n);
void   simple_log(int *values, int n);

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
