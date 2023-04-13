/*Permita la carga aleatoria de dos arrays de 10 enteros cada uno, llamados A y B, 
e indique cual de los dos tiene más números pares
tratando de utilizando como máximo dos bucles for en todo el programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 10

int main()
{
    int A[N];
    int B[N];
    int cantParesA = 0;
    int cantParesB = 0;
    srand(getpid());
    int i;

    //CARGO LOS VALORES AL ARRAY A, LOS MUESTRO Y CUENTO LOS NUMEROS PARES
    printf("Array A:\n");
    printf("[ ");
    for( i = 0; i < N; i++)
    {
        A[i] = 1 + rand() %10;

        printf("%d ", A[i]);

        if (A[i] % 2 == 0)
        {
            cantParesA++;
        }
    }
    printf("] \n");

    //CARGO LOS VALORES AL ARRAY B, LOS MUESTRO Y CUENTO LOS NUMEROS PARES
    printf("Array B:\n");
    printf("[ ");
    for( i = 0; i < N; i++)
    {
        B[i] = 1 + rand() %10;

        printf("%d ", B[i]);

        if (B[i] % 2 == 0)
        {
            cantParesB++;
        }
    }
    printf("] \n");

    //DIGO EL ARRAY CON MAS PARES

    printf("El array con más cantidad de pares es:\n");

    if(cantParesA > cantParesB)
    {
        printf("El array A con la cantidad de %d pares\n", cantParesA);
    }
    else if(cantParesB > cantParesA)
    {
       printf("El array B con la cantidad de %d pares!\n", cantParesB); 
    }
    else if(cantParesA == cantParesB)
    {
        printf("Los arrays tienen la misma cantidad de pares!\n");
    }

    return 0;
    
}