#include <stdio.h>

int main()
{
  _Bool a = 0;
  _Bool b = 0;
  _Bool result;
  
  result = a || b;      /*Or (a && b) or even !(a &&b), !(a || b) */
  
  
  printf("%d", result);
  
  return 0;
  
}
