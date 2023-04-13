/*Pida un número por teclado y decir si es un número primo o no. 
Controlar que el usuario ingrese un número mayor a 0.*/

#include <stdio.h>

int main()
{
    int numeroAIngresar;
    int contador = 0;

    printf("Ingrese un número mayor que cero y te diré si es primo\n");

    do
    {
        printf("> ");
        scanf("%d", &numeroAIngresar);

        for(int i = 1; i < numeroAIngresar; i++)
        {
            if (numeroAIngresar % i == 0)
            {
                contador++;
            }
        }

    }while(numeroAIngresar <= 0);

    if(contador > 2)
    {
        printf("El numero %d es compuesto!\n", numeroAIngresar);
    }
    else
    {
        printf("El numero %d es primo!\n", numeroAIngresar);
    }

    return 0;
}