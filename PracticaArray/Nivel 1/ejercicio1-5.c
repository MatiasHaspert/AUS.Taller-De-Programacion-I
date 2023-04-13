/*Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio*/

#include <stdio.h>

#define N 10

int main()
{
    float A[N];
    int i;
    float promedio = 0;

    printf("Ingrese 10 valores: \n");

    for(i = 0; i < N; i++)
    {
        printf("> ");
        scanf("%f", &A[i]);
    } 

    for( i = 0; i < N; i++)
    {
        promedio = promedio + A[i];
    }

    for( i = 0; i < N; i++)
    {
        if(A[i] > promedio / N)
        {
            printf("El elemento que supera al promedio de %f es: %f\n", promedio / N, A[i]);
        }
    }
    
    return 0;

}