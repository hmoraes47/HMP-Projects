#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int grades[10]; // Array storing 10 values
    int count = 10; // Number of values to be read
    long sum = 0; // Sum of the numbers
    float average = 0.0f; // Average of the numbers

    printf("\nEnter the 10 grades:\n");

    // Read the ten numbers to be averaged
    for(int i = 0; i < count; ++i)
    {
        printf("%2u>", i + 1);
        scanf("%d", &grades[i]); // Read a grade.
        sum += grades[i]; // Add it to sum

        average = (float)sum/count; // Average
        printf("\nAverage of the ten grades entered is: %.2f\n", average);
    }

    return 0;
}
