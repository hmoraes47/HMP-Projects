#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5

int main()
{
    int year, month;
    float total, subtotal;

    float rain[YEARS][MONTHS]={
                    {4.9,4.3,4.2,4.7,5.7,9.1,6.3,4.9,5.4,3.7,4.9,4.0},
                    {4.9,4.3,4.2,4.7,5.7,9.1,6.3,4.9,5.4,3.7,4.9,4.0},
                    {4.9,4.3,4.2,4.7,5.7,9.1,6.3,4.9,5.4,3.7,4.9,4.0},
                    {4.9,4.3,4.2,4.7,5.7,9.1,6.3,4.9,5.4,3.7,4.9,4.0},
                    {4.9,4.3,4.2,4.7,5.7,9.1,6.3,4.9,5.4,3.7,4.9,4.0}
                    };

    printf("YEAR\t\tRAINFALL (inches)\n");

    for(year = 0, total = 0; year < YEARS; year++)
    {
        for(month = 0, subtotal = 0; month < MONTHS; month++)
        {
            subtotal += rain[year][month];
        }
        printf("%5d \t%15.lf\n", 2010 + year, subtotal);
        total += subtotal;

    }

    printf("\nThe yearly average is %.lf inches.\n\n", total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Apr  Mar  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for(month = 0; month < MONTHS; month++)
    {
        for(year = 0, subtotal = 0; year < YEARS; year++)
        {
            subtotal += rain[year][month];
        }

        printf("%4.1f ", subtotal/YEARS);
    }

    printf("\n");

    return 0;
    }
