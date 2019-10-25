#include <stdio.h>

int main()
{
  int number, remainder;
  
  printf("Enter a number: \n");
  scanf("%i", &number);
  
  remainder = number % 2;
  
  if(remainder == 0)
  {
    printf("The number is even.\n");
  }
  else
  {
    printf("The number is odd.\n");
  }
  
  return 0;
  
}


/*Else if
if (x)
{
  ...
}
else if
{
  ...
}
else
{
  ...
}
*/

*/Nested if
if(x)
{
  if(y)
  {
  ...
  }
  else
  {
  ...
  }
else
{
...
}
}
*/
