/*Implementar un programa que permita ordenar un array de 10 enteros de 
forma ascendente siguiendo algún algoritmo de
ordenamiento
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

void carga (int []);
void ordenamiento (int []);
void imprimir (int []);

int main()
{
    int array[N];

    carga(array);
    printf("Array ingresado:\n");
    imprimir(array);

    printf("\nArray ordenado:\n");
    ordenamiento(array);
    imprimir(array);  
    
    return EXIT_SUCCESS;
}

void carga (int array[])
{
    int i;

    printf("Ingrese valores al array y los ordenaré de forma ascendente.\n");
    
    for ( i = 0; i < N; i++)
    {
        printf("%d)> ",i+1);
        scanf("%d",&array[i]);
    }
    
}

void ordenamiento (int array[])
{
    int i,j,pivot;
    for (i = 0; i < N-1; i++)
    {
        for (j = i+1; j < N; j++)
        {
            if (array[i] > array[j])
            {
                pivot = array[i];
                array[i] = array[j];
                array[j] = pivot;
            }
        }
    }
    
}

void imprimir (int array[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ",array[i]);
    }
    
}