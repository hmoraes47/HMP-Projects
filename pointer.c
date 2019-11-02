#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    pnumber = &number;

    printf("pnumber's value: %p\n", number);
    return 0;
}
