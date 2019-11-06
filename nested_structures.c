// Testing Nested Structures

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct date
    {
        struct time
        {
            int hour;
            int minutes;
            int seconds;
        }time1;

        int day;
        int month;
        int year;
    }date1;

    printf("Enter the hour(hh:mm:ss): ");
    scanf("%d:%d:%d", &date1.time1.hour, &date1.time1.minutes, &date1.time1.seconds);

    printf("Enter the date(dd:mm:yy): ");
    scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);

    printf("The hour entered is: %d:%d:%d\n", date1.time1.hour, date1.time1.minutes, date1.time1.seconds);
    printf("The date entered is: %d/%d/%d\n", date1.day, date1.month, date1.year);



    return 0;
}
