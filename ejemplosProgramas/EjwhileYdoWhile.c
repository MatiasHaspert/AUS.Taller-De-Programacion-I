/*Desarrollar un programa que permita ingresar numeros hasta que el usuario ingrese el 0
y calcular el promedio de dichos números*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float numeroAingresar, promedio;
    float sumatoria = 0; //ACUMULADOR DE LOS NUMEROS INGRESADOS
    int cantNumIngresados = 0;

    do
    {
        printf("Ingrese un numero:\n");
        scanf("%f",&numeroAingresar);

        sumatoria = sumatoria + numeroAingresar;

        if(numeroAingresar != 0)
        {
            cantNumIngresados++;
        }
    }while(numeroAingresar != 0);
    
    if(cantNumIngresados != 0)
    {
        promedio = sumatoria / cantNumIngresados;

        printf("El promedio es:%f\n", promedio);
    }

    return 0;

}