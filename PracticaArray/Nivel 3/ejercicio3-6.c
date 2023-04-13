/*Dado un array de 10 enteros positivos en el rango [0, 100] cargados aleatoriamente, mostrarlo por pantalla,
luego ordenar sus elementos de manera ascendente y finalmente mostrar el resultado*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 10

int main()
{
    int A[N];
    int i, j, pivot;
    srand(getpid());

    //cargo y muestro el array
    printf("Array:\n");
    printf("{ ");

    for(i = 0; i < N; i++)
    {
        A[i] = 1 + rand() %100;

        printf("%d ", A[i]);
    }
    printf("}\n");

    for( i = 0; i < N-1; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(A[i] > A[j])
            {
                pivot = A[i];
                A[i] = A[j];
                A[j] = pivot;
            }
        }
    }

    printf("Array ordenado de forma ascendente:\n");
    printf("{");
    for(i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}");

    return 0;
    
}