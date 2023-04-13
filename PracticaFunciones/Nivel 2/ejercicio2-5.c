/*Crear una función que al recibir un array de 10 enteros determine si está ordenado de manera ascendente*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

void carga(int []);
void arrayAscendente (int []);

int main()
{
    int array[N];

    carga(array);
    
    arrayAscendente(array);    
    
    return EXIT_SUCCESS;
}

void carga(int array[])
{
    int i;

    printf("Ingrese valores al array y te diré si está ordenado de forma ascendente:\n");

    for ( i = 0; i < N; i++)
    {
        printf("%d)> ",i+1);
        scanf("%d",&array[i]);

    }
    
}

void arrayAscendente (int array[])
{
    int i;
    int orden = 1;
    for ( i = 0; i < N-1; i++)
    {
        if(array[i+1] < array[i])
        {
            orden = 0;
            break;
        }
    }

    if (orden == 1)
    {
        printf("El array está ordenado de forma ascendente.\n");
    }
    else
    {
        printf("Array desordenado.\n");
    }
    
}