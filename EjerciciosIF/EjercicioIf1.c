/*Informar por pantalla si un numero ingresado por el usuario es negativo positivo o cero*/

#include <stdio.h>

int main ()
{
    int num;

    printf("Ingrese un numero y te diré si es negativo, positivo o cero\n");
    printf("Ingrese el numero:\n");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("El numero %d es positivo\n", num);
    }
    else if (num < 0)
    {
        printf("El numero %d es negativo!\n", num);
    }
    else
    {
        printf("El numero ingresado es cero!!\n");
    }
}