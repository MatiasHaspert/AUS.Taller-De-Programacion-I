/*Dado un array A de 10 enteros cargados automáticamente (con números aleatorios), invertir el array,
es decir si se tiene el array
A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente modo al finalizar el programa
A= [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ]. Considere el uso de una variable a modo de pivote.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 10
int main()
{
    int Array[N];
    int i, pivot;
    srand(getpid());

    printf("Array original:\n\n");

    for( i = 0; i < N; i++)
    {
        Array[i] = 1 + rand() %100;
        printf("%d ", Array[i]);
    }

    for( i = 0; i < N / 2;i++)
    {
        pivot = Array[i];
        Array[i] = Array[N - 1 - i];
        Array[N - 1 - i] = pivot;
    }
    printf("\n\nArray Invertido:\n\n");

    for( i = 0; i < N; i++)
    {
        printf("%d ", Array[i]);
    }

    return 0;
}