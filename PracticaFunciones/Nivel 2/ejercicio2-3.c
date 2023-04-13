//Dado un array de N enteros, crear una función para invertirlo y posteriormente mostrarlo por pantalla

#include <stdio.h>
#include <stdlib.h>

#define N 10

void cargar(int []); //carga un array con valores suministrados por el usuario
void mostrar(int []); //muestra un array
void invertirArray(int []);

int main()
{
    int array[N];
    int numAingresar;

    cargar(array);
    
    printf("\nArray ingresado:\n");
    
    mostrar(array);

    invertirArray(array);
    

    return EXIT_SUCCESS;
}

void cargar(int array[])
{
    int i;

    printf("Ingresa valores al array:\n");

    for ( i = 0; i < N; i++)
    {
        printf("> ");
        scanf("%d",&array[i]);
    }

}

void mostrar (int array[])
{
    int i;

    for ( i = 0; i < N; i++)
    {
        printf("%d ",array[i]);
    }

}

void invertirArray(int array[])
{
    int i, pivot;

    printf("\nArray invertido:\n");
    for( i = 0; i < N / 2;i++)
    {
        pivot = array[i];
        array[i] = array[N - 1 - i];
        array[N - 1 - i] = pivot;
    }

    mostrar(array);
}