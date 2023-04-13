#include <stdio.h>
#include <stdlib.h>


void esMultiploDe(int, int);

int main()
{
    int numeroIngresado;
    int i;

    printf("Ingrese un numero y te dire si es multiplo de [2..10].\n");
    printf("> ");
    scanf("%d",&numeroIngresado);

    for(i = 2; i <= 10; i++)
    {
        esMultiploDe(numeroIngresado, i);
    }

    return 0;
}


void esMultiploDe(int n1, int n2)
{
    if(n1 % n2 == 0)
    {
        printf("El %d es multiplo de %d.\n", n1,n2);
    }
    else
    {
        printf("El %d no es multiplo de %d.\n", n1, n2);
    }
}