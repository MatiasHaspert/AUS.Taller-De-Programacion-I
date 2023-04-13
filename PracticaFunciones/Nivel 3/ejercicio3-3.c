/*Permitir al programa el almacenamiento de una matriz 3x3 con enteros comprendidos en el rango de valores [1, 9].
Cargar dicha matriz manualmente.
Mediante una función se debe determinar si la matriz resultante representa o no un cuadrado mágico, donde las suma de los valores en
cada fila, columna y diagonales da el mismo número.
*/

#include <stdio.h>
#include <stdlib.h>

#define FILyCOLUMN 3
#define MAGICO 15

void inicializar(int matriz[][FILyCOLUMN]);
void carga(int[][FILyCOLUMN]);
void magico(int [][FILyCOLUMN]);
void muestroMatriz(int [][FILyCOLUMN]);

int main()
{
    int matriz[FILyCOLUMN][FILyCOLUMN];
    
    inicializar(matriz);

    carga(matriz);

    magico(matriz);

    return EXIT_SUCCESS;
}

void inicializar(int matriz[][FILyCOLUMN])
{
    int i, j;
    for(i = 0; i < FILyCOLUMN; i++)
    {
        for(j = 0; j < FILyCOLUMN; j++)
        {
            matriz[i][j] = 0;
        }
    }
}
void carga (int matriz[][FILyCOLUMN])
{
    int i,j;
    printf("\n>>>CUADRADO MÁGICO<<<\n");
    printf("\nIngrese valores a la matriz comprendidos entre [1, 9]:\n");

    for(i = 0; i < FILyCOLUMN; i++)
    {
        for(j = 0; j < FILyCOLUMN; j++)
        {
            do
            {
                printf("Ingrese un valor en la fila %d y columna %d:\n",i+1,j+1);
                scanf("%d", &matriz[i][j]);

            }while (matriz[i][j] < 1 || matriz[i][j] > 9);
        }   
    }
}

void muestroMatriz (int matriz[][FILyCOLUMN])
{
    int i,j;

    for ( i = 0; i < FILyCOLUMN; i++)
    {
        for(j = 0; j < FILyCOLUMN; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }
    
}

void magico (int matriz[][FILyCOLUMN])
{
    int sumatoria = 0;
    int i,j;

    //suma filas
    for(i = 0; i < FILyCOLUMN; i++)
    {
        sumatoria = 0;
        for(j = 0; j < FILyCOLUMN; j++)
        {
            sumatoria += matriz[i][j];
        }

        if(sumatoria != MAGICO)
        {
            printf("La suma de la fila %d no es 15!\n",i+1);
            printf("No puede ser cuadrado mágico.\n");
            break;
        }
    }

    // suma columnas
    sumatoria = 0;
    for (i = 0; i < FILyCOLUMN; i++)
    {
        for ( j = 0; j < FILyCOLUMN; i++)
        {
            sumatoria += matriz[j][i];
        }

        if(sumatoria != MAGICO)
        {
            printf("La suma de la columna %d no es 15!\n",i+1);
            printf("No puede ser cuadrado mágico.\n");
            break;
        }
    }

    //suma diagonales
    sumatoria = 0;
    for ( i = 0; i < FILyCOLUMN; i++)
    {
        sumatoria += matriz[i][i];

        if(sumatoria != MAGICO)
        {
            printf("La suma de la diagonal principal no es 15!\n");
            printf("No puede ser cuadrado mágico.\n");
            break;
        }
    }

    sumatoria = 0;
    for(i = 0; i < FILyCOLUMN; i++)
    {
        sumatoria += matriz[i][FILyCOLUMN-1-i];
    }

    if(sumatoria != MAGICO)
    {
        printf("La suma de la diagonal secundaria no da 15.\n");
        printf("No puede ser cuadrado mágico.\n");
    }
    else if(sumatoria == 15)
    {
        printf("¡¡CUADRADO MÁGICO!!\n");
        muestroMatriz(matriz);
        printf("Juego finalizado.\n");
    }

}