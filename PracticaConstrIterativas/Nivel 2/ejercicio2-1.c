/*Muestre los divisores de un número*/

#include <stdio.h>

int main()
{
    int numeroAIngresar;
    int cantDivisores = 0;

    printf("Ingrese un numero y te daré sus divisores: \n");
    do
    {
        printf("> ");
        scanf("%d", &numeroAIngresar);

    }while(numeroAIngresar < 0);

    for(int i = 1; i < numeroAIngresar; i++)
    {
        if(numeroAIngresar % i == 0)
        {
            printf("> %d es un divisor de %d\n", i, numeroAIngresar);

            cantDivisores++;
        }
    }

    printf("Los divisores de %d son en total %d\n", numeroAIngresar, cantDivisores);

    return 0;
}