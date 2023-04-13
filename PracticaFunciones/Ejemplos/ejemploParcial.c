/*
crear un programa que mediante una funcion determine si en un array cargado manualmente con
numeros positivos (forzar esto) la suma de sus elementos es un numero primo
Deben existir las siguientes funciones:
void cargaArray (int []);
void muestraArray (int []);
int sumaPrima (int []) // retorna 1 si la suma es un nro primo
*/

#include <stdio.h>
#include <stdlib.h>

#define N 10

void cargaArray(int []);
void muestraArray (int []);
int sumaPrima (int []);

int main()
{
    int array[N];
    int esPrimo;

    printf("Ingrese valores positivos al array y te diré si su suma es un numero positivo:\n");

    cargaArray(array);

    muestraArray(array);

    esPrimo = sumaPrima(array);

    if(esPrimo == 1)
    {
        printf("La suma del array es un número primo.\n");
    }
    else
    {
        printf("La suma del array no es un número primo.\n");
    }

    return EXIT_SUCCESS;
}

void cargaArray(int array[])
{
    int i;

    for ( i = 0; i < N; i++)
    {
        do
        {
            printf("> ");
            scanf("%d",&array[i]);

            if (array[i] < 0)
            {
                printf("Ingrese un valor positivo:\n");
                printf("> ");
            }
            
        } while (array[i] < 0);
        
    }   

}

void muestraArray (int array[])
{
    int i;

    printf("Array ingresado:\n");

    for(i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

}

int sumaPrima (int array[])
{
    int sumatoria = 0;
    int contador = 0;
    int i;

    for ( i = 0; i < N; i++)
    {
        sumatoria += array[i];
    }

    for(i = 1; i < sumatoria; i++)
    {
        if(sumatoria % i == 0)
        {
            contador++;
        }
    }

    printf("\nLa suma del array es %d.\n",sumatoria);

    if(contador > 2)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}




