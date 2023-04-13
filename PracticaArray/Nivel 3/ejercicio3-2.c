/*Permitir la carga automática de una matriz de dimensión NxN y mostrarla por pantalla*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define FILAS 5
#define COLUMNAS 5

int main()
{
    int M[FILAS][COLUMNAS];
    int i, j;
    srand(getpid());

    //cargo la matriz
    for( i = 0; i < FILAS; i++)
    {
        for(j = 0; j < COLUMNAS; j++)
        {
            M[i][j] = 1 +rand() %10;
        }

    }

    printf("\n");

    //muestro la matriz

    for( i = 0; i < FILAS; i++)
    {
        for(j = 0; j < COLUMNAS; j++)
        {
            if(M[i][j] < 10)
            {
                printf("0%d ",M[i][j]);
            }
            else if(M[i][j] >= 10)
            {
                printf("%d ",M[i][j]);
            }
        }

        printf("\n");
    }
}