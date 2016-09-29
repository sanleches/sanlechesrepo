#include <stdio.h>
#include <string.h>

int strindex(char s[], char t){
    int i, num = 0;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == t){
            num = i;
        }
    }
    return num;

}

int main()
{
    char a;
    int b;
    char arre[20];
    strcpy(arre, "holaamigocomoestas");

    printf( "ingrese la letra : " );
    scanf( "%c", &a );

    b = strindex(arre, a);

    printf( "esta en la posicion %d", b );
    getchar();
    return 0;
}
