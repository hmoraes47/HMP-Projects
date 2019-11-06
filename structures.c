// Structure test

#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct time
    {
        int hour;
        int minutes;
        int seconds;
    }time1;

    printf("Enter the hour(hh:mm:ss): ");
    scanf("%d:%d:%d", &time1.hour, &time1.minutes, &time1.seconds);

    printf("The hour entered is: %d:%d:%d", time1.hour, time1.minutes, time1.seconds);


    return 0;
}
