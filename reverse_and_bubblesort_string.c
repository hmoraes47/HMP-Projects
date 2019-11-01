#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char arr[100];
   char name[25][50], temp[25];
   int n, j;

   printf("Enter a string to reverse\n");
   gets(arr);

   strrev(arr);

   printf("Reverse of the string is \n%s\n\n", arr);

   //BUBBLE SORT

    printf("Sorts the strings of an array using bubble sort :  \n");

    printf("Input number of strings :");
    scanf("%d", &n);

    printf("Input string %d : \n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for(int i = 1; i < n; i++)
        for( j = 0; j <= n-i; j++)
            if(strcmp(name[j],name[j+1])>0)
            {
                strncpy(temp,name[j], sizeof(temp) - 1);
                strncpy(name[j],name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1],temp, sizeof(name[j] + 1) - 1);
            }

    printf("The strings appear after sorting :\n");

    for (int i = 0; i <= n; i++)
        printf("%s\n", name[i]);

   return 0;
}


