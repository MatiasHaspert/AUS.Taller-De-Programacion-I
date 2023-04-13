/*Solicitar al usuario el ingreso de notas y almacenarlas en un vector hasta que ingrese 0
(Se permite un maximo de 30 notas), luego mostrarlas por pantalla.*/

#include <stdio.h>

int main()
{
    float notas[30];
    float notaIngresada;
    int cantNotas = 0;
    int i;


    do
    {
        printf("Ingrese una nota: ");
        scanf("%f", &notaIngresada);

        if(notaIngresada != 0)
        {
            notas[cantNotas] = notaIngresada;

            cantNotas++;
        }


    }while(notaIngresada != 0 && cantNotas < 30);

    printf("Las notas ingresadas son:\n");

    for( i= 0; i < cantNotas; i++)
    {      
       printf("> %f\n", notas[i]);
    }
    
    return 0;
}