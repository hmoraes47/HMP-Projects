#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double x = atoi(argv[1]);  /*This way we have only to add arguments in the program.*/
    double y = atoi(argv[2]);
    double p = 0.0;
    double a = 0.0;

    p = 2.0 * (x + y);
    a = x * y;

    printf( "O perímetro do triângulo é: %f\n", p);
    printf( "A área do triângulo é: %f\n", a);

    return 0;

}
