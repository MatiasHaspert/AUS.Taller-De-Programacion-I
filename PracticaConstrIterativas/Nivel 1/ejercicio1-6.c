/*Calcule el promedio de 10 números ingresados por el usuario*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    float sumatoria;
    float promedio;

    for(int i = 1; i <=10; i++)
    {
        printf("Ingrese el numero:\n");
        printf("> ");
        scanf("%f",&numero);

        sumatoria = sumatoria + numero;
    }

    promedio = sumatoria / 10;
    printf("El promedio de los numeros ingresados es:%f\n", promedio);

    return 0;
}