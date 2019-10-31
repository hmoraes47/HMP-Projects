#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buf[100]; //Input buffer
    int nLetters = 0; //Number of letters in input
    int nDigits = 0; //Number of digits in input
    int nPunct = 0; //Number of punctuation characters

    printf("Enter an interesting string of less than %d characters:\n",100);
    scanf("%s", buf); //Read a string into buffer

    int i = 0; //Buffer index

    while(buf[i])
    {
        if(isalpha(buf[i]))
            ++nLetters; //Increment letter count
        else if(isdigit(buf[i]))
            ++nDigits; //Increment digit count
        else if(ispunct(buf[i]))
            ++nPunct;

        i++;
    }

    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);

    return 0;
}
