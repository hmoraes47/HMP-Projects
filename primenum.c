#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,count;
    printf("The prime numbers between 3 and 100 are: \n");

    for (i=3;i<100;i++)
    {
        count=0;
            for(a=1;a<=i;a++)
            {
                if(i%a==0)
                    count++;
            }

            if(count==2)
                printf("%d\t", i);

    }
    return 0;
}
