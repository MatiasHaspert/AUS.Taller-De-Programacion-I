#include <stdlib.h>
#include <stdio.h>

#define N 5
void cargaVector(int []);
void ordenarMenorAmayor(int []);
void ordenarMayorAmenor(int []);
void imprimirVector(int []);


int main()
{
    int vector[N];

    cargaVector(vector);
    printf("Vector ordenado de menor a mayor:\n");
    ordenarMenorAmayor(vector);
    imprimirVector(vector);
    printf("\nVector ordenado de mayor a menor:\n");
    ordenarMayorAmenor(vector);
    imprimirVector(vector);
    
    return EXIT_SUCCESS;
}

void cargaVector(int vector[N])
{
    int i;
    printf("Ingrese los valores al vector.\n");

    for ( i = 0; i < N; i++)
    {
        printf("> ");
        scanf("%d",&vector[i]);
    }
}

void ordenarMenorAmayor(int vector[N])
{
    int i,j;
    int pivot;

    for ( i = 0; i < N - 1; i++)
    {
        for(j = 0; j < N - 1; j++)
        {
            if(vector[j] > vector[j + 1])
            {
                pivot = vector[j];
                vector[j] = vector[j+1];
                vector[j + 1] = pivot;
            }
        }
    }
}

void ordenarMayorAmenor(int vector[N])
{
    int i,j;
    int pivot;

    for(i = 0; i < N-1;i++)
    {
        for(j = 0; j < 4-i; j++)
        {
            if(vector[j] < vector[j + 1])
            {
                pivot = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = pivot;
            }
        }
    }
}

void imprimirVector(int vector[N])
{
    int i;

    for(i = 0; i < N;i++)
    {
        printf(">%d\n",vector[i]);
    }
}