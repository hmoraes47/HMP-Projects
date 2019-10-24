#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned a = 60; // 0011 1100
   unsigned b = 13; // 0000 1101

   int result = 0;

   result = a & b; // =0000 1100 >> Both has to be 1 to print 1.

   printf("Result is: %d", result);

   return 0;
}
