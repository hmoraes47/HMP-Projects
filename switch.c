#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;

    switch(today)
    {
    case Sunday:
        printf("Today is Sunday");
        break;
    case Monday:
        printf("Today is Monday");
        break;
    default:
        print("Whatever");
        break;
    }
    return 0;
}
