#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 10;
    int *pnumber = NULL;

    pnumber = &number;

    printf("The number of pointer's address is: %p\n", &number);
    printf("The value of the pointer's address is: %p\n", &pnumber);
    printf("The value of what the pointer is pointing to is: %d\n", *pnumber);

    return 0;
}
