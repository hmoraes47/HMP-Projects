#include <stdio.h>
#include <stdlib.h>

int squareFunction(int *pointer);

int main()
{
    int value1;

    printf("Digite um número inteiro: ");
    scanf("%d", &value1);

    printf("O quadrado desse número é: %d", squareFunction(&value1));

    return 0;
}

int squareFunction(int *pointer)
{
    *pointer = (*pointer) * (*pointer);

    return *pointer;
}
