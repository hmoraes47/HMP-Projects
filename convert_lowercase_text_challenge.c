#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;

    char c = ' ';

    // Open the first file, that already exists
    fp = fopen("file.txt", "r");

    // Verification
    if( fp == NULL)
    {
        printf("Error opening the file.");
        return(-1);
    }

    // Creating a temp file
    fp1 = fopen("temp.txt", "w");

    // Verification
    if( fp1 == NULL)
    {
        printf("Error creating the file.");
        return(-1);
    }

    // Read the content and store in variable c
    while ((c = fgetc(fp)) != EOF)
    {
        if (islower(c))
        {
            c = c-32;
        }

        fputc(c, fp1);
    }

    fclose(fp);
    fclose(fp1);

    remove("file.txt");

    // Rename files
    rename("temp.txt", "file.txt");

    // Remove temp file
    remove("temp.txt");

    // Read again the data and print it out
    fp = fopen("file.txt", "r");

    if( fp == NULL)
    {
        printf("Error opening the file.");
        return(-1);
    }

    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;
    fp1 = NULL;



    return 0;
}
