#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;

    filePointer = fopen("file.txt","w+");

    fputs("This is Henrique de Moraes\n", filePointer);
    fputs("I am glad to be here", filePointer);

    fclose(filePointer);


    return (0);
}
