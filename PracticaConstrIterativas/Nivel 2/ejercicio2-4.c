/*Calcule el promedio de N números, se dejarán de solicitar números hasta que se introduzca el cero*/

#include <stdio.h>

int main()
{
    float numeroAIngresar, promedio;
    int cantNumIngresados = 0;
    float sumatoria = 0;

    printf("Ingrese una cantidad de numeros y te daré el promedio, para salir pulse 0\n");
    
    do
    {
        printf("> ");
        scanf("%f", &numeroAIngresar);

        if(numeroAIngresar != 0)
        {
            cantNumIngresados++;
        }

        sumatoria = sumatoria + numeroAIngresar;

    }while(numeroAIngresar != 0);

    promedio = sumatoria / cantNumIngresados;

    printf("El promedio de los numeros ingresados es: %f\n", promedio);

    return 0;
}