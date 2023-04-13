#include <stdio.h>

int main()
{
    int i, j;

    printf("Ejercicio A)\n");

    for(i = 1; i<= 5; i++)
    {
        for(j = 1 ; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Ejercicio B)\n");

    for(i = 1; i <=4; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            printf("+");
        }
        printf("\n");
    }

    printf("Ejercicio C)\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = 5; j >= i; j--)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}