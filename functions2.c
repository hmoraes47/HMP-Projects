#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int u, int v);
float absolutValue(float x);
double squareRoot (double x);

int main()
{
    printf("STEP 1:");
    printf("The gcd of 150 and 35 is %d\n", gcd(150, 35));
    printf("The gcd of 1026 and 405 is %d\n", gcd(1026, 405));
    printf("The gcd of 150 and 35 is %d\n\n", gcd(83, 240));

    printf("STEP 2:\n");
    float absvalue;
    printf("Enter a value: ");
    scanf("%f", &absvalue);
    printf("The absolut value of %f is %f.\n\n", absvalue, absolutValue(absvalue));

    printf("STEP 3:\n");
    double num;
    printf("Enter a second value: ");
    scanf("%lf", &num);
    printf("The square of the number %lf is %lf.\n\n", num, squareRoot(num));


    return 0;
}

int gcd(int u, int v)
{
    int temp;

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

float absolutValue(float x)
{
    if (x <0)
        x = -x;

    return x;
}

double squareRoot(double y)
{

    if(y < 0)
    {
        printf("Negative argument to squareRoot");

        return -1.0;
    }

    double result = sqrt(y);

    return result;
}
