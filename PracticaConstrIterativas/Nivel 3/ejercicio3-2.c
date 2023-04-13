/*Calcule el factorial de un número entero positvo.*/

#include <stdio.h>

int main()
{
    int numeroAIngresar;
    int factorial = 1;

    printf("Ingrese un entero positivo:\n");
    printf(">");
    scanf("%d", &numeroAIngresar);

    for(int i = 1; i <= numeroAIngresar; i++ )
    {
        factorial = factorial * i;
    }

    printf("El factorial de %d es: %d\n", numeroAIngresar, factorial);
}