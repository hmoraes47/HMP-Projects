// This program outputs the number of lines of a text file.

#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100

int main()
{
    FILE *fp;
    int count = 0; // Liner counter (result)
    char filename[MAX_FILE_NAME];
    char c; // To store a character read from file

    // Input
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open the file
    fp = fopen(filename, "r+");

    // Check if the file exists
    if(fp == NULL)
    {
        printf("Error in opening file.");
        return(-1);
    }

    // Extract characters from file and store in characters c
    for (c = getc(fp); c != EOF; c = getc(fp))
        {
                if (c == '\n')
                    {
                        count += 1; // Increment count if this character is newline
                    }
        }

    printf("The number of lines is: %d", count);

    fclose(fp);

    return 0;
}
