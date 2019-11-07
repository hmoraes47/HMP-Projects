#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[60];

    // Opening file for reading
    fp = fopen("file.txt", "r");

    if(fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }
    if( fgets(str, 60, fp)!=NULL)
    {
        // Writing a content to stdout
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;

    return (0);
}
