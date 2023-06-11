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
    int A[N];
    int pivot = 0;
    int i,j;

    srand(getpid());

    printf("{ ");
    for ( i = 0; i < N; i++)
    {
        A[i] = 1 + rand() %500;

        printf("%d ",A[i]);
    }
    printf("} \n");
    
    for (i = 0, j = N-1; i < N/2 && j > 0; i++,j--)
    {
        pivot = A[i];
        A[i] = A[j];
        A[j] = pivot; 
    }
    
    printf("Array invertido:\n");
    for ( i = 0; i < N; i++)
    {
        printf("%d ",A[i]);
    }
    

    return 0;
}