#include <stdio.h>

// Protótipo da função soma
int soma( int x, int y );

int main()
{
    int x, y;

    printf( "Entre com dois números inteiros: " ); scanf( "%d %d", &x, &y );
    printf( "Soma = %d\n", soma( x, y ) );
    printf( "O maior valor digitado foi: %d\n", x>y ? x:y );

return 0;
}

// Corpo da função soma
int soma( int x, int y )
{
    return x+y;
}
