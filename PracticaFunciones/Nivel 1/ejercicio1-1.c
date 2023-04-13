/* Crear un programa que permita pasar una cantidad de días y horas
(especificados con enteros positivos, validar esto) a minutos*/

#include <stdio.h>
#include <stdlib.h>

void cantDiasyHorasAmin(int, int);

int main()
{
    int dias;
    int horas;
    do
    {
        printf("Ingrese una cantidad de días: ");
        scanf("%d",&dias); 
    }while(dias < 0);

    do
    {
        printf("Ingrese la cantidad de horas: ");
        scanf("%d",&horas); 
    }while (horas < 0);
    
    cantDiasyHorasAmin(dias,horas);
    
    
    return 0;
}


void cantDiasyHorasAmin(int dias, int horas)
{
    int minutos;

    minutos = (dias * 24 * 60) + (horas * 60);

    printf("%d dias y %d horas equivalen a %d minutos.\n", dias, horas,minutos);

}