#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    double grosspay, tax1, tax2, tax3, totaltax, netpay;

    printf("Enter the number of hours worked: ");
    scanf("%i", &hours);

    if(hours <= 40)
    {
        grosspay = 12.0 * hours; //The pay rate is $12.00/hour
    }
    else
    {
        grosspay = 12 * 40 + (18 * (hours - 40));
    }

    if(grosspay <= 300)
    {
        totaltax = grosspay * 0.15;
    }
    else if(grosspay > 300 && grosspay <= 450)
    {
        tax1 = 300.0 * 0.15;
        tax2 = (grosspay - 300) * 0.20;
        totaltax = tax1 + tax2;
    }
    else
    {
        tax1 = 300.0 * 0.15;
        tax2 = 150 * 0.20;
        tax3 = (grosspay - 450) * 0.25;
        totaltax = tax1 + tax2 + tax3;
    }

    netpay = grosspay - totaltax;

    printf("The gross pay is: %f\n", grosspay);
    printf("The amount of taxes is: %f\n", totaltax);
    printf("The net pay is: %f\n", netpay);

    return 0;
}
