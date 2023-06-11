/*
EXTRA 1

Numeros amigos

Dos números amigos son dos números enteros positivos a y b
tales que la suma de los divisores propios de uno es igual al otro número y viceversa.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int sumaDivA = 0;
    int sumaDivB = 0;
    int i;
    printf("Ingrese dos número enteros positivos y te diré si son amigos:\n");

    do
    {   
        if( a <= 0)
        {
            printf("Ingrese el primer número:\n");
            printf("> ");
            scanf("%d",&a);
        }
        else if( b <= 0)
        {
            printf("Ingrese el segundo número:\n");
            printf("> ");
            scanf("%d",&b);
        }
    } while (a <= 0 || b <= 0);
    
    for (i = 1; i < a; i++)
    {
        if( a % i == 0)
        {
            sumaDivA += i;
        }
    }

    for (i = 1; i < b; i++)
    {
        if(b % i == 0)
        {
            sumaDivB += i;
        }
    }
    
    if(sumaDivA == b && sumaDivB == a)
    {
        printf("\nLos números %d y %d son amigos!!!\n",a,b);
    }
    else
    {
        printf("\nLos números %d y %d no son amigos!\n",a,b);
    }
    

    return EXIT_SUCCESS;
}