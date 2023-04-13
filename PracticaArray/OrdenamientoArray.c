#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 100

int main()
{
    int array[N];
    int i, j, pivot;
    srand(getpid());

    printf("Array aleatorio!\n\n");
    // cargo y muestro el array original
    for( i = 0; i < N; i++)
    {
        array[i] = 1 + rand() %100;
        printf("%d ", array[i]);

    }
    // metodo de ordenamiento
    for( i = 0; i < N-1; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(array[i] > array[j])
            {
                pivot = array[i];
                array[i] = array[j];
                array[j] = pivot;
            }
        }
    }
    //muestro el array ordenado
    printf("\n\nArray Ordenado de menor a mayor!\n\n");
    for( i = 0; i < N; i++)
    {
        printf("%d ", array[i]);

    }

    return 0;

}