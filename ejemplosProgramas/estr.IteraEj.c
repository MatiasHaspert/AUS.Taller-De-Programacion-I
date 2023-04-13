#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaIngresada;
    int cantAprobados = 0;
    int cantDesaprobados = 0;
    int cantPromocionados = 0;
    float notaMasAltaActual = 0;
    float notaMasBajaActual = 10;
    float promedio;
    int cantNumerosIngresados = 0;
    float sumatoria = 0;

    printf("Ingrese sus notas y te daré tu promedio\n");
    do
    {
        printf("Ingrese una nota:\n");
        printf(">");
        scanf("%f",&notaIngresada);

        //CALCULO EL PROMEDIO

        sumatoria = sumatoria + notaIngresada;

        if(notaIngresada != 0)
        {
            cantNumerosIngresados++;
        }

        //CALCULO LOS PROMOCIONADOS, APROBADOS Y DESAPROBADOS
        if(notaIngresada >= 7)
        {
            cantPromocionados++;
        }
        else if (notaIngresada >= 4)
        {
            cantAprobados++;
        }
        else if(notaIngresada < 4 && notaIngresada != 0)
        {
            cantDesaprobados++;
        }

        //CALCULO LA NOTA MAS ALTA

        if (notaIngresada > notaMasAltaActual)
        {
            notaMasAltaActual = notaIngresada;
        }

        //CALCULO LA NOTA MAS BAJA

        if(notaIngresada < notaMasBajaActual && notaIngresada != 0)
        {
            notaMasBajaActual = notaIngresada;
        }

    
    }while(notaIngresada != 0);

    printf("Promocionados:%d\n", cantPromocionados);
    printf("Aprobados:%d\n", cantAprobados);
    printf("Desaprobados:%d\n", cantDesaprobados);

    printf("La nota más alta es:%f\n", notaMasAltaActual);
    printf("La nota más baja es:%f\n", notaMasBajaActual);

    if(cantNumerosIngresados != 0)
    {
        promedio = sumatoria / cantNumerosIngresados;
        printf("El promedio de las notas es:%f\n", promedio);
    }

    
    return 0;
    
}