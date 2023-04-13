/*Permita la carga de una array de 30 enteros aleatorios. Luego mostrarlos por pantalla.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 30

int main()
{
    int array[N];
    int i;
    srand(getpid());

    for(i = 0; i < N; i++)
    {
        array[i] = rand() %31;
    }

    for( i = 0; i < N; i++)
    {
        printf("Posición %d) %d \n",i+1, array[i]);
    }

    return 0;
}