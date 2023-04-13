/*Permitir el ingreso de una matriz de enteros de dimensión 3x4 y mostrarla por pantalla*/

#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 4

int main()
{
    int M[FILAS][COLUMNAS];
    int i, j;

    //carga matriz

    for(i = 0; i < FILAS; i++)
    {
        for( j = 0; j < COLUMNAS; j++)
        {
            printf("Posicion Fila %d -- Posicion Columna %d: ",i, j);
            scanf("%d", &M[i][j]);
        }
    }

    //muestro la matriz

    for(i = 0; i < FILAS; i++)
    {
        for(j = 0; j < COLUMNAS; j++)
        {
            printf("%d ", M[i][j]);
        }

        printf("\n");
    }
    
    return 0;
}
