#include <stdio.h>
#include <stdlib.h>

#define N 10

void cargar(int []); //carga un array con valores suministrados por el usuario
void mostrar(int []); //muestra un array
int pertenece(int [], int); //determina si un entero está en el array

int main()
{
    int array[N];
    int numAingresar;

    cargar(array);
    
    mostrar(array);

    pertenece(array,numAingresar);

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

    printf("\nArray ingresado:\n");

    for ( i = 0; i < N; i++)
    {
        printf("%d ",array[i]);
    }

}

int pertenece(int array[],int num)
{
    int i, cont = 0;

    printf("\nIngrese un valor y te diré si se encuentra en el array: ");
    scanf("%d",&num);

    for ( i = 0; i < N; i++)
    {
        if (array[i] == num)
        {
            printf("El numero %d se encuentra en el array!!\n",num);

            cont++;

            break;
        }
    }

    if (cont == 0)
    {
        printf("El numero %d no se encuentra en el array.\n",num);
    }
    
}