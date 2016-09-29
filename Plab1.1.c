#include <stdio.h>



int main()
{
    char a;

    printf( "ingrese la letra Mayuscula: " );
    scanf( "%c", &a );
    a = a + 32;
    printf( "La Minuscula es %c", a );
    getchar();
    return 0;
}
