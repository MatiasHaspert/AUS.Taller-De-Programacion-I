/*
Se carga un array con 50 enteros aleatorios del 1 al 100

a) Se tiene que determinar la racha de numeros en orden creciente (<=) mas larga
b) indicar en que indice del array comienza

Por ejemplo
racha max=5
Inicia en el indice 4

0   1  2  3 4
45 67 41 22 3 67 89 91 99 1 4 3 88 17 33 25 ....

Esto no es la salida pretendida) 
1  2  (se corto la racha)
      1  (se corto la racha)
         1  (se corto la racha)
            1  2  3  4 5 (se corto la racha)
                         1 2 (se corto la racha)
                             1 2  (se corto la racha)
                                 . . .
SALIDA PRETENDIDA
Un mensaje similar a este:
   "La racha de numeros crecientes más larga es de N números e inicia en el índice I y es esta: "
   Lista de numeros: ......

En el ejemplo:
   La racha de numeros crecientes más larga es de 5 números e inicia en el índice 4 y es esta: 
   Lista de numeros: 3 67 89 91 99
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50

int main()
{
    int A[N]; //array para guardar los numeros al azar
    int i;
    int racha = 0;
    int inicioRacha = 0;
    int rachaMax;

    srand(time(NULL));
    
    for ( i = 0; i < N; i++)
    {
        A[i] = 1 + rand() %100;

        if(A[i] >= A[i-1])
        {
            racha++;
        }
        else
        {
            if(racha > rachaMax)
            {
                rachaMax = racha; 
                inicioRacha = i - racha - 1;  
            }
                        
            racha = 0;
        }
    }

    // Verificar si la última racha es la más larga
    if (racha > rachaMax)
    {
        rachaMax = racha;
        inicioRacha = N - racha - 1;
    }

    printf("\nArray cargado: \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",A[i]);
    }
    

    printf("\nLa racha de numeros crecientes más larga es de %d números e inicia en el índice %d y es esta:\n",rachaMax,inicioRacha);
    for(i = inicioRacha; i <= rachaMax+inicioRacha; i++)
    {
        printf("%d ",A[i]);
    }

    return EXIT_SUCCESS;
}
