/*Dadas dos matrices de dimensión NxN, llamadas X e Y, mostrar por pantalla la suma de las mismas.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 4

int main()
{   
    int r[N][N];
    int x[N][N];
    int y[N][N];
    srand(getpid());
    int i, j;

    //cargo y muestro la matriz x

    printf("Matriz X:\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            x[i][j] = 1 + rand() %10;

            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //cargo y muestro la matriz y

    printf("Matriz Y:\n");
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            y[i][j] = 1 + rand() %10;

            printf("%d ", y[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    //sumo las matrices
    for(i = 0; i < N; i++)
    {   
        for(j = 0; j < N; j++)
        {
            r[i][j] = x[i][j] + y[i][j];
        }
    }
    //muestro la matriz con sus sumas
    printf("\n");
    printf("Matriz con sus sumas:\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(r[i][j] < 10)
            {
                printf("0%d ",r[i][j]);
            }
            else if (r[i][j] >= 10)
            {
                printf("%d ",r[i][j]);
            }
        }

        printf("\n");
    }

    return 0;

}