/*Desarrolar un programa que muestre el promedio de 4 notas ingresadas*/

#include <stdio.h>

int main()
{
    float nota;
    float sumaDeNotas = 0;
    int cantidadDeNotas = 0;
    float promedio;

    printf("Ingrese su nota por favor:\n");
    scanf("%f", &nota);

    sumaDeNotas = sumaDeNotas + nota;
    cantidadDeNotas++;

    printf("Ingrese su nota por favor:\n");
    scanf("%f", &nota);

    sumaDeNotas += nota;
    cantidadDeNotas++;

    printf("Ingrese su nota por favor:\n");
    scanf("%f", &nota);

    sumaDeNotas += nota;
    cantidadDeNotas++;

    printf("Ingrese su nota por favor:\n");
    scanf("%f", &nota);

    sumaDeNotas += nota;
    cantidadDeNotas++;

    promedio = sumaDeNotas / cantidadDeNotas;
    
    printf("Su promedio es: %f", promedio);

    return 0;
}