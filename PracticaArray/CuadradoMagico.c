#include <stdio.h>
#include <stdlib.h>

#define FILAS 3
#define COLUMNAS 3

int main()
{
    int M[FILAS][COLUMNAS];
    int i,j;
    int testigo[9] = {0};
    int suma = 0;

    printf("CUADRADO MAGICO\n\n");
    //carga matriz

    for(i = 0; i < FILAS; i++)
    {
        for(j = 0; j < COLUMNAS; j++)
        {
            //le digo al usuario que ingrese un valorentre 1 y 9
            do
            {
                printf("Ingrese un valor en la fila y columna (%d,%d):\n", i,j);
                printf("> ");
                scanf("%d", &M[i][j]);
            } while (M[i][j] < 1 || M[i][j] > 9);
        }
    }
    printf("\n");

    //verificamos y hay numeros repetidos

    for(i = 0; i < FILAS; i++)
    {
        for(j = 0; j < COLUMNAS; j++)
        {
            testigo[ M[i][j] - 1] ++;

            if(testigo[M[i][j] - 1] > 1)
            {
                printf("Numero repetido en la posicion (%d,%d)!\n\n", i, j);
                printf("No es un cuadrado mágico!\n\n");

                break;
            }
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

    // suma de filas 
    for(i = 0; i < FILAS; i++)
    {
        suma = 0; //la variable vuelve siempre a 0
        for(j = 0; j < COLUMNAS; j++)
        {
            suma += M[i][j];
        }

        if(suma != 15)
        {
            printf("La suma de la fila %d no es 15!\n\n",i + 1);
            printf("No puede ser un cuadrado mágico!\n\n");
            break;
        }
    }

    //suma de columnas

    for(j = 0; j < COLUMNAS; j++)
    {
        suma = 0;
        for(i = 0; i < FILAS; i++)
        {
            suma += M[i][j];
        }

        if(suma != 15)
        {
            printf("La suma de la columna %d no es 15!\n\n",j + 1);
            printf("No puede ser un cuadrado mágico!\n\n");
            
            break;
        }  
    }

    /*suma diagonales
        00 01 02
        10 11 12
        20 21 22 */
    suma = 0;
    for(i = 0; i < FILAS; i++)
    {
        suma += M[i][i];
    }
    if(suma != 15)
    {
        printf("La suma de la diagonal principal no da 15!\n");
    }

    suma = 0;
    for(i = 0; i < FILAS; i++)
    {
        suma += M[i][2-i];
    }
    if(suma != 15)
    {
        printf("La suma de la diagonal secundaria no da 15!\n");
    }
    else if(suma == 15)
    {
        printf("Esto es un cuadrado mágico!!!!\n");
    }
    return 0;
}