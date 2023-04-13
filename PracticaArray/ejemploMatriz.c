#include <stdio.h>
#include <stdlib.h>

#define FILAS 5
#define COLUMNAS 4

int main()
{
    int M[FILAS][COLUMNAS];
    int i, j;

    //cargo la matriz
    for( i = 0; i < FILAS; i++)
    {
        for(j = 0; j < COLUMNAS; j++)
        {
            printf("Posicion Fila:%d -- Posicion columna %d: ", i, j);
            scanf("%d ", &M[i][j]);
        }

    }

    printf("\n");

    //muestro la matriz

    for( i = 0; i < FILAS; i++)
    {
        for(j = 0; j < COLUMNAS; j++)
        {
            printf("%d ",M[i][j]);
        }

        printf("\n");
    }
}