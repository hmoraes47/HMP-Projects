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

/* WITH THE OPERATOR | :
#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned a = 60; // 0011 1100
   unsigned b = 13; // 0000 1101

   int result = 0;

   result = a | b; // result = 0011 1101 (= 61)

   printf("Result is: %d", result);

   return 0;
}

*/

/* WITH THE OPERATOR ^ :
#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned a = 60; // 0011 1100
   unsigned b = 13; // 0000 1101

   int result = 0;

   result = a ^ b; // result = 0011 0001 (= 49)

   printf("Result is: %d", result);

   return 0;
}

*/

/* WITH THE OPERATOR ~ :
#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned a = 60; // 0011 1100
   unsigned b = 13; // 0000 1101

   int result = 0;

   result = ~a;

   printf("Result is: %d", result);

   return 0;
}

*/

/* WITH THE OPERATOR << or >> :
#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned a = 60; // 0011 1100
   unsigned b = 13; // 0000 1101

   int result = 0;

   result = a << 2; // 1111 0000 (= 240)

   printf("Result is: %d", result);

   return 0;
}

*/
